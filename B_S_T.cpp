#include<iostream>
using namespace std;

struct node{
//    int ID;
//float CGPA;
//student *left;
//student *right;
    int data;
    float mark;
    node *left;
    node *right;
};

node * root = NULL;

//Defining a function to add a node after a previous node
int insertData(int num){
    //create node
    node *nn=new node;
    nn->data=num;
    nn->left= NULL;
    nn->right=NULL;

    if(root == NULL){
        root=nn;
    }else{
        node *child=root,*parent;
        while(child!=NULL){
            parent=child;
            if(child->data < num)child=child->right;
            else if(child->data > num) child=child->left;
            else if(child->data == num){
                cout<<num<< " is a duplicate data!!!\n\n";
                return 0;
            }
        }
        if(parent->data < num)parent->right=nn;
        else parent->left=nn;
    }
    return 1;
}


void visit(node *parent){
    if(root == NULL)cout<<"Tree does not exist!\n\n";
    if(parent!=NULL){
        visit(parent->left);
        cout<<parent->data<< " ";
        visit(parent->right);
    }
}

int searchData(int data){
    int depth = 0;
	node *temp = new node;
	temp = root;
	// Run the loop untill temp points to a NULL pointer.
	while(temp != NULL)
	{
		depth++;
		if(temp->data == data)
		{
			cout<<"\nData found at depth: "<<depth;
			return 1;
		}
		// Shift pointer to left child.
		else if(temp->data > data)
			temp = temp->left;
		// Shift pointer to right child.
		else
			temp = temp->right;
	}

	cout<<"\n Data not found";
	return 1;
}
bool c=false;

struct node* getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void inorder(struct node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

node* findMin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

struct node* Insert(struct node* root, int data)
{
	if (root == NULL)
		return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

bool Search(node*root,int value)
{
	if(root==NULL)
		return false;
	else if(root->data == value)
	{
		return true;
	}
	else if(value < root-> data)
		Search(root->left,value);
	else if(value > root->data)
		Search(root->right,value);
}


node* Delete( node* root,int value)
{
	c=Search(root,value);
	if(root==NULL)
		return root;
	else if(value< root->data)
	{
		root->left= Delete(root->left,value);
	}
	else if(value> root->data)
	{
		root->right= Delete(root->right,value);
	}

	// Node deletion
	else
	{
		//case 1: Leaf Node
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		//case 2: one child
		else if(root->left==NULL)
		{
			struct node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			struct node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		//case 3: 2 child
		else
		{
			struct node*temp=findMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
	return root;

}



int main(){
    // Keeping some elements into an array
    int a[7]={9,11,4,3,7,15,1};
    int data,x;
    for(int i=0;i<7;i++)insertData(a[i]);
    visit(root);
    cout<<endl;
    cout<<"Enter a search value: ";
    cin>>data;
    searchData(data);
    cout<<endl<<endl;
	cout<<"Enter a delete value:";
	cin>>x;
    Delete(root,x);
    if(c)
	{cout<<"Node Deleted"<<endl;
     cout<<"\nAfter Deletion: "<<endl;
     cout<<"Tree: ";
     inorder(root);
     cout<<endl;}
	else
		cout<<"Node Not Found"<<endl;

    return 0;
}
