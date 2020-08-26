#include<iostream>
using namespace std;
typedef struct ListNode {

	int data;
	ListNode* next;
     }* nodeptr;

nodeptr head=NULL, tail=NULL;

void AddData (int item)
	{
	nodeptr newNode = new ListNode;
	newNode->data = item;
	newNode->next = NULL;
	if(head==NULL){   // for the first node
		head = newNode;
		}
	else {
//		curr->next = newNode;
		}
//	curr = newNode;
	}



void display()
	{
	nodeptr ptr = head;

	while (ptr != NULL)
     		{
		cout << ptr->data << " ";
		ptr = ptr->next ;
		}
	cout << endl;
	}
void display(nodeptr ptr );


int main()
{

int item,i,n;
nodeptr head = NULL, curr;

for(i=1;i<=n;i++){
	cin >> item;
	AddData(item);
	}
display(head);
}
void display(nodeptr ptr )
     {

     while (ptr != NULL)
     	{
	     cout << ptr->data << " ";
	     ptr = ptr->next ;
	}
     cout << endl;
      }

void Search (int item)
	{
	nodeptr ptr = head;
	while(ptr->data != item && ptr->next !=NULL)
		ptr = ptr->next;
	if(ptr->data==item)
		cout << item << "found";
	else
		cout<< item<<"Not found";
	}


void Insert_Begin(int item)
	{
	nodeptr newNode = new ListNode;
	newNode->data = item;
	newNode->next = head;

		head = newNode;
	}

//void Insert_Mid (int item)
//	{
//	nodeptr newNode = new ListNode;
//	newNode->data = item;
//	nodeptr ptr = head;
//	while(ptr->data != 12 && ptr->next !=NULL)
//		ptr = ptr->next;
//	if(ptr->data==12){
//		newNode->next = ptr->next;
//		ptr->next = newNode;}
//	else
//		cout<< "12 not found";
//	}
//void Insert_End (int item)
//	{
//	nodeptr newNode = new ListNode;
//	newNode->data = item;
//	newNode->next = NULL;
//
//	if(head==NULL){   // as first node
//		head = newNode;
//		}
//	else {
//		curr =head;
//		while(curr->next != NULL){
//			curr = curr ->next;
//			}
//		curr->next = newNode;
//	       	}
//	}

void first_node_dlt()
{
	nodeptr ptr= head;
	head = ptr->next;
	delete(ptr);
}
void middle_node_dlt(int item)
{
	nodeptr ptr = head, dptr;
	while(ptr->next->data != item && ptr->next !=NULL){
		ptr= ptr->next;
		}
	dptr = ptr->next;
	ptr->next = ptr->next->next;
	delete(dptr);
}
void Last_node_dlt()
{
	nodeptr ptr= head, dptr;
	while(ptr->next->next!=NULL)
		ptr=ptr->next;
	dptr = ptr->next;
	ptr->next = NULL;
	delete(dptr);
}






