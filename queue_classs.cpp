#include<iostream>
using namespace std;
#define size 20
int queue[size];
int noElements;
int front =-1;
int rear=-1;


bool isempty(){
if(front==-1 && rear==-1)
    return true;
    else
        return false;
   }


void enqueue(int x)
{
		 if(rear==size-1)
			cout<<"queue is full";
		 else
    {rear++;
    queue[rear] = x;
		 if(front == -1)
			front++;
	  noElements++;}
}



int dequeue()
{
    if (front == -1 || front>rear)
			cout << "Queue is empty";
	  else
			{
			int x = queue[front];
	    front++;
	  	noElements--;
	  	return x;
			}
}


void showfront(){
if(isempty())
    cout<<"Queue is empty\n";
    else
        cout<<"Element at front is:\n"<<queue[front];
}



void display(){
if(isempty())
    cout<<"Queue is empty\n";
    else
        {
            for(int i=front;i<=rear;i++)
           cout<<queue[i]<<" "<<"\n";
        }}



int main (){
enqueue(2);
enqueue(21);
enqueue(22);
enqueue(28);
enqueue(26);

display();
dequeue();
//dequeue();
//dequeue();
//dequeue();
//dequeue();
showfront();
return 0;}

