#include <iostream>
using namespace std;

typedef struct ListNode
{
   int data;
    struct ListNode *next;
}*nodeptr;

nodeptr head=NULL,curr;

void addData(int item)
{
    nodeptr node=new ListNode;
    node->data=item;
    node->next=NULL;

    if(head==NULL)
    {
        head=node;
    }
    else
    {
        curr->next=node;
    }
    curr=node;
}

void display(nodeptr ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void searchItem(int item)
{
    nodeptr ptr=head;
    while(ptr->data!=item && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==item)
    {
        cout<<item<<" is found"<<endl;
    }
    else
    {
        cout<<item<<" is not found"<<endl;
    }
}

int main()
{
    int n,i;
    int item;

    cout<<"Enter number of nodes: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter item: ";
        cin>>item;
        addData(item);
    }
    cout<<"Printing..."<<endl;
    display(head);

    cout<<"Enter item to search: ";
    cin>>item;
    searchItem(item);
}

