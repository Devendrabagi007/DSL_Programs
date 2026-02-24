#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
void push() {
    int value;
    if (top >= MAX - 1) {
        cout << "Stack Overflow! Cannot insert.\n";
        return;
    }
    cout << "Enter value to insert: ";
    cin >> value;
    stack[++top] = value;
    cout << "Value inserted successfully.\n";
}
void pop() {
    if (top < 0) {
        cout << "Stack Underflow! Cannot delete.\n";
        return;
    }
    cout << "Deleted element: " << stack[top--] << endl;
}
void update() {
    int pos, newValue;
    if (top < 0) {
        cout << "Stack is empty! Nothing to update.\n";
        return;
    }
    cout << "Enter position (1 to " << top + 1 << "): ";
    cin >> pos;
    if (pos < 1 || pos > top + 1) {
        cout << "Invalid position!\n";
        return;
    }
    cout << "Enter new value: ";
    cin >> newValue;

    stack[pos - 1] = newValue;
    cout << "Value updated successfully.\n";
}
void display() {
    if (top < 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements are:\n";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << endl;
}
int main() {
    int choice;
    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Update\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: update(); break;
            case 4: display(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}




