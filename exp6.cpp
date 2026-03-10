#include<iostream>
using namespace std;
#define MAX 100
class Queue{
 private:
  int arr[MAX];
  int front,rear;
 public:
  Queue(){
   front=-1;
   rear=-1;
  }
bool isFull(){
   return (rear==MAX-1);
}
bool isEmpty(){
   return (rear==-1 || front<rear);
}
void enqueue(int value){
   if(isFull()){
    cout<<"QueueOverflow\n";
    return;
   }
   if(front==-1)front=0;
      arr[++rear]=value;
      cout<<value<<"inserted into queue\n";
  }
void dequeue(){
   if(isEmpty()){
     cout<<"Queue Underflow\n";
     return;
    }  
   cout<<arr[front]<<"deleted from queue\n";
   front++;
   }
void peek(){
  if(isEmpty()){
     cout<<"Queue is empty\n";
   return;
  } 
  cout<<arr[front]<<"is peek from queue\n";
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
   cout<endl;
 }
};
int main(){
Queue q;
int choice,value;

   do{ 
     cout<<"--Queue menu--"<<endl;
     cout<<"1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.exit\n";
     cin>>choice;

      switch(choice){
         case 1:
           cout<<"enter value:";
           cin>>value;
           q.enqueue(value);
         break;
         case 2:
            q.dequeue();
         break;
         case 3:
            q.peek();
         break;
         case 4:
            q.display();
         break;
         case 5:
            cout<<"Exit program\n";
         break;
         default:
            cout<<"Invalid Choice1!!\n";
      }
    }while(choice!=5);
 return 0;
}
