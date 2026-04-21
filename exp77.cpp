#include <iostream>
using namespace std;

const int SIZE = 10;

class DoublyLinkedList {
    int data[SIZE];
    int prev[SIZE];
    int next[SIZE];

    int head;     
    int freeIndex; 

public:
    DoublyLinkedList() {
        head = -1;
        freeIndex = 0;

        for (int i = 0; i < SIZE - 1; i++)
            next[i] = i + 1;
        next[SIZE - 1] = -1;
    }

    void insertFront(int value) {
        if (freeIndex == -1) {
            cout << "List is full\n";
            return;
        }

        int newNode = freeIndex;
        freeIndex = next[freeIndex];

        data[newNode] = value;
        prev[newNode] = -1;
        next[newNode] = head;

        if (head != -1)
            prev[head] = newNode;

        head = newNode;
    }

    void insertEnd(int value) {
        if (freeIndex == -1) {
            cout << "List is full\n";
            return;
        }

        int newNode = freeIndex;
        freeIndex = next[freeIndex];

        data[newNode] = value;
        next[newNode] = -1;

        if (head == -1) {
            prev[newNode] = -1;
            head = newNode;
            return;
        }

        int temp = head;
        while (next[temp] != -1)
            temp = next[temp];

        next[temp] = newNode;
        prev[newNode] = temp;
    }

    void deleteFront() {
        if (head == -1) {
            cout << "List is empty\n";
            return;
        }

        int temp = head;
        head = next[head];

        if (head != -1)
            prev[head] = -1;

        // Add deleted node to free list
        next[temp] = freeIndex;
        freeIndex = temp;
    }

    void display() {
        int temp = head;
        while (temp != -1) {
            cout << data[temp] << " ";
            temp = next[temp];
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insertFront(10);
    list.insertFront(20);
    list.insertEnd(30);
    list.insertEnd(40);

    cout << "List: ";
    list.display();   // 20 10 30 40

    list.deleteFront();

    cout << "After deletion: ";
    list.display();   // 10 30 40

    return 0;
}
