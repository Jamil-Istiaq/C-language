#include<iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
}*top=NULL,*p;

Node* newnode(int x)
{
    p=new Node;
    p->data=x;
    p->next=NULL;
    return(p);
}

void push(Node *q)
{
    if(top==NULL)
        top=q;
    else
    {
        q->next=top;
        top=q;
    }
}

void pop(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Deleted element is "<<top->data;
        p=top;
        top=top->next;
        delete(p);
        cout<<endl;
     cout<<endl;
    }
}

void showstack()
{
    Node *q;
    q=top;

    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        while(q!=NULL)
        {
            cout<<q->data<<" ";
            q=q->next;

        }
    }
    cout<<endl;
     cout<<endl;
}

int main()
{
    int ch,x;

    Node *nptr;


        cout<<"Stack by Linked list"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1: cout<<"Enter data: ";
                    cin>>x;
                    nptr=newnode(x);
                    push(nptr);
                    break;

            case 2: pop();
                    break;

            case 3: showstack();
                    break;

            case 4: exit(0);

            default: cout<<"Wrong choice"<<endl;
        }


    return main();
}
