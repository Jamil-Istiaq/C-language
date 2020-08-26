#include <iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *prev, *next;
}*nodeptr;

nodeptr head=NULL, tail=NULL;
nodeptr ptr;

void addData(int item)
{
    nodeptr newNode= new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    newNode->prev=NULL;

    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        ptr=head;
    }
    else
    {
        newNode->prev=tail;
        tail=newNode;
        ptr->next=newNode;
        ptr=newNode;
    }
}

void displayFromFirst(nodeptr p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void insert_first(int node,int item, nodeptr p)
	{
	nodeptr newNode = new ListNode;
	newNode->data = item;
	newNode->next = head;
	newNode->prev=tail;

		head = newNode;
	}


void deleteFirst(nodeptr p)
{ nodeptr newNode= new ListNode;
    head=p->next;
    newNode->prev=NULL;
    delete p;
}

void deletionMiddle(nodeptr p, int item)
{
    nodeptr dptr;
    while(p->next->data!=item && p->next!=NULL)
    {
        p=p->next;
    }
    if((p->next != NULL))
    {
        dptr=p->next;
        p->next=dptr->next;
        p->next->prev = p->prev;
        delete dptr;
    }


}

void deletionLast(nodeptr p)
{
    nodeptr dptr;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    dptr=p->next;
    p->next=NULL;
    p->prev = p->prev;
    delete dptr;
}

int main()
{
    int n, item,i,node;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter Item: ";
        cin>>item;
        addData(item);
    }
    cout<<"The Linked List :"<<endl;
    displayFromFirst(head);
    cout<<endl;


    cout<<"Insert at first:";
    cin>>item;
    insert_first(node,item,head);
    cout<<endl;
    cout<<"The Linked List :"<<endl;
    displayFromFirst(head);

    cout<<"\nDeletion at First"<<endl;
    deleteFirst(head);
    displayFromFirst(head);

    cout<<endl;
    cout<<"\nDeletion at Middle"<<endl;
    cout<<"Enter node to delete: ";
    cin>>item;
    deletionMiddle(head,item);
    displayFromFirst(head);

    cout<<endl;
    cout<<"\nDeletion at Last"<<endl;
    deletionLast(head);
    displayFromFirst(head);
}

