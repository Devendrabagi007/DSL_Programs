#include <iostream>
using namespace std;
struct node {
int a;
Node* next;
};
Node* head = NULL;
void insertBegin(int value) {
Node* newNode = new Node();
newNode->a = value;
newNode->next = head;
head = newNode;
}
void deleteEnd() {
if (head == NULL) {
cout<<"list is empty\n";
return;
}
if (head-> == Null) {
delete head;
head = NULL;
retrun;
}
Node* temp = head;
Node* prev;
while (temp->next != NULL) {
prev = temp;
temp = temp->next;
}
Node* temp = head;
Node* prev;
while (temp->next != NULL) {
prev = temp;
temp = temp->next;
}
prev->next = NULL;
delete temp;

