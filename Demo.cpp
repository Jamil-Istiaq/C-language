#include <iostream>
#include <stdlib.h>
using namespace std;


struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;


void push(int data);
void pop();
void empty();
void display();
void create();

int count = 0;

int main()
{
    int no, ch, e;

    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    //cout<<"3.Top"<<endl;
   // cout<<"4.Empty"<<endl;
    //cout<<"5.Exit"<<endl;
    cout<<"6.Display"<<endl;
    //cout<<"7.Stack Count"<<endl;
    //cout<<"8.Destroy stack"<<endl;

    create();



        cout<<"Enter choice : "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter data : "<<endl;
            cin>>no;
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
               cout<<"No elements in stack"<<endl;
//            else
//            {
//                e = topelement();
//                cout<<"Top element:"<< e<<endl;
//            }
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
//            stack_count();
            break;
        case 8:
//            destroy();
            break;
        default :
            cout<<"Wrong choice, Please enter correct choice"<<endl;
            break;
        }return main();

}

/* Create empty stack */
void create()
{
    top = NULL;
}

/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct *node);
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *);
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

/* Display stack elements */
void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }

    while (top1 != NULL)
    {
        cout<<top1->info<<endl;
        top1 = top1->ptr;
    }
 }

/* Pop Operation on stack */
void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        cout<<"Error : Trying to pop from empty stack"<<endl;
        return;
    }
    else
        top1 = top1->ptr;
    cout<<"Popped value: "<<top->info<<endl;
    free(top);
    top = top1;
    count--;
}


/* Check if stack is empty or not */
void empty()
{
    if (top == NULL)
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty with "<< count<<endl;
}


