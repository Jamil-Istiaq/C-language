#include<iostream>
using namespace std;
#define size 20
int a[size];
int front =-1;
int rear=-1;
bool isempty(){
if(front==-1 && rear==-1)
    return true;
    else
        return false;
   }
void enqueue(int value){
if((rear+1)%size==front)
    cout<<"Queue is full\n"<<endl;
else {if(front==-1)
    front=0;
rear++;
a[rear]=value;}}

void dequeue(){
if(isempty())
    cout<<"Queue is empty\n";
    else
        if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%size;}

void showfront(){
if(isempty())
    cout<<"Queue is empty\n";
    else
        cout<<"Element at front is:\n"<<a[front];
}

void display(){
if(isempty())
    cout<<"Queue is empty\n";
    else
        {int i;
        if (front<=rear){
            for(i=front;i<=rear;i++)
           cout<<a[i]<<" "<<"\n";
           }
else{
  i=front;
  while(i<size) {
    cout<<a[i]<<"";
    i++;
  }
  i=0;
  while(i<=rear) {
    cout<<a[i]<<"";
    i++;
  }
}}



           }

int main (){
enqueue(2);
enqueue(21);
enqueue(22);
enqueue(28);
enqueue(26);

display();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
showfront();
return 0;}

