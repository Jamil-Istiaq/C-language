#include<iostream>
using namespace std;

typedef struct ListNode {

	int data;
	ListNode* next;
     }* nodeptr;

void input_data(){
int data[100],i,n;
cout<<"Enter the size of the List:"<<endl;
cin>>n;
cout<<"Enter the Elements : "<<endl;
for(i=0;i<n;i++)
{cin>>data[i];}}

void AddData (int item)
	{nodeptr head=NULL,curr;
	nodeptr newNode = new ListNode;
//	ListNode data = item;
	newNode->next = NULL;
	if(head==NULL){   // for the first node
		head = newNode;
		}
	else {
		curr->next = newNode;
		}
	curr = newNode;
	}
int main(){
input_data();}
//AddData();}
