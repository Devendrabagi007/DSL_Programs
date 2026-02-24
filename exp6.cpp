#include<iostream>
using namespace std;

#define MAX5
classQueue{
private:
int arr[MAX];
int front,rear;

public:
Queue(){
front=-1;
rear=-1;
}
bool isFull(){
return rear==-1||front>rear;
}
void enqueue(int value){
if(isFull()){
cout<<"QueueOverflow\n";
return;
}
if(front==-1)front=0;
Arr[++rear]=value;
cout<<value<<"inserted into queue\n";
}
void dequeue(){
if(isEmpty()){
cout<<"Queue Underflow\n";
return;
}
cout<<rr[front]<<"deleted from queue\n";
front++;
}
void update(int pos,int value){
if(isEmpty()){
cout<<"Queue is empty\n";
return;
}
arr[pos]=value;
cout<<"Queue updated at position"
<<pos<<"\n";
}
void display(){
if(isEmpty()){
cout<<"Queue is empty\n";
return;
}
cout<<"Queue elements:";
for(int i=front;i<=rear;i++){
cout<<arr[i]<<"";
}
cout<<rndl;
}
];
int main(){
Queue q;
int choice,value,pos;

do{
cout<<"\n--Queuemenu---\n";
coout<,"1.Enqueue\n2.Dequeue\n3.Update\n4.Display\n5.exit\n";
cin>>choice;

switch(choice){
case1:
cout<<"enter value:";
cin>>value;
q.enqueue(value);
break;
case2:
q.dequeue();
break;
case3:
cout<<"enterposition(index):";
cin>>pos;
cout<<"Enter new value:";
cin>>value;
q.update(pos,value);
break;
case4:
q.display();
break;
case5:
cout<<"Invalid choice\n";
}
}while(choice!=5);
 return 0;
 }

