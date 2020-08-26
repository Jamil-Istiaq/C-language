#include<iostream>
#include<math.h>
#define SIZE 50
using namespace std;
int q[SIZE],front=0,rear=0;
int main()
{
int ch;
void enqueue();
void dequeue();
void display();
while(1)
{
cout<<"\n Chose a option: "<<endl;
cout<<"1.Enter a number(Enqueue): "<<endl;
cout<<"2.Delete number(Dequeue)"<<endl;
cout<<"3.Display"<<endl;
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;

}}}
void enqueue(){
int no,i,flag = 1;
cout<<"Enter the number:";
cin>>no;
for (i=2;i<=sqrt(no)/2; i++) {
        if (no%i==0) {
            flag=0;
            break;
        }
    }
if (flag==1) {
        q[rear]=no;
    }
rear++;
}
void dequeue()
{
int no;
int temp=front;
if(temp>30){
no=q[temp];}
front++;
}

void display()
{
int i,temp=front;
if (front==rear)
cout<<"The queue is empty";
else
{
cout<<"Element in the queue:"<<endl;
for(i=temp;i<rear;i++)
{
cout<<q[i]<<" ";
}
}
}

