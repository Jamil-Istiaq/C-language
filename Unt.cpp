#include<iostream>
using namespace std;

typedef struct Student node;
struct Student{
    int id;
    float cgpa;
    node *left;
    node *right;
};
node *root= NULL;
int n1=1;

void Insert(int id, float cgpa)
{
    node *child= root, *parent=root;
    node *new_node= new node;
    new_node->id= id;
    new_node->cgpa= cgpa;
    new_node->left=NULL;
    new_node->right=NULL;

    if(root==NULL){
        root=new_node;
        return;
    }
    else{
          while(child){
                if(id > child->id){
                    parent= child;
                    child= child-> right;
                }
                else if(id < child->id){
                    parent = child;
                    child= child-> left;
                }
                else if(id == child->id){
                    cout<<"Duplicate \n"<<endl;
                    return;
                }
                }
        if(id > parent->id) parent->right= new_node;
        else parent->left= new_node;
    }
}

void showData(int id)
{
    node *temp=root;
    if(root==NULL){
        cout<<"Tree is empty!"<<endl;
        return;
    }
    else{
        while(temp!=NULL){
        if(id == temp->id ){
            cout<<"ID: "<<temp->id<<" "<<"CGPA: "<<temp->cgpa;
            break;
        }
        else if(id > temp->id){
            temp= temp->right;
        }
        else{
            temp= temp->left;
        }
        }
        if(temp==NULL){
            cout<<"Entry not found!"<<endl;
        }
    }
}

void Delete(int id)
{
    node *curr= root, *parent=NULL, *target=NULL;
    while(curr){
        if(curr->id==id){
            target= curr;
            break;
        }
        else if(id > curr->id){
            parent= curr;
            curr= curr->right;
        }
        else if(id < curr->id){
            parent = curr;
            curr= curr->left;
        }
    }
    if(target==NULL){
        cout<<"Wrong value!"<<endl;
        return;
    }
    //Deleting node with no child
    if(target->left==NULL && target->right==NULL){
        if(parent==NULL){
            root=NULL;
            delete target;
            }
        else{
            if(id > parent->id){
                parent->right= NULL;
                delete target;
            }
            else{
                parent->left= NULL;
                delete target;
            }
        }
}

    //Deleting node with two childs.
    if(target->left!=NULL && target->right!=NULL){
        node *curr= target->right, *Min;
        while(curr){
            Min= curr;
            curr= curr->left;
        }
        int tmp= Min->id;
        Delete(Min->id);
        target->id= tmp;
        return;
    }

    //Deleting node with one child.
    if(target->left!=NULL){
        if(id > parent->id){
            parent->right= target->left;
            delete target;
        }
        else{
            parent->left= target->left;
            delete target;
        }
        return;
    }

    if(target->right!=NULL){
        if(id > parent->id){
            parent->right= target->right;
            delete target;
        }
        else{
            parent->left= target->right;
            delete target;
        }
        return;
    }
    return;
}

void visit(node *temp)
{
    int cnt=0;
    if(temp==NULL){
        return;
    }
    visit(temp->left);
    cnt++;
    cout<<"ID: "<<temp->id<<" "<<"CGPA: "<<temp->cgpa<<", ";
    visit(temp->right);
}

int FindHeight(node* root)
{
	if(root==NULL)
		return 0;

	else
	{
		int lb=FindHeight(root->left);
		int rb=FindHeight(root->right);
		return max(lb,rb)+1;
	}
}

int TotalStudents(node*root)
{
	if(root==NULL)
		return 0;
	if(root->left!=NULL)
	{
		n1=n1+1;
		n1=TotalStudents(root->left);
	}
	if(root->right!=NULL)
	{
		n1=n1+1;
		n1=TotalStudents(root->right);
	}
	return n1;
}

int main()
{
    int val, n;
    float cgpa;
    while(1)
    {

     cout<<"0.Exit"<<endl;
     cout<<"1.Insert"<<endl;
     cout<<"2.Delete"<<endl;
     cout<<"3.Show Data"<<endl;
     cout<<"4.Tree Height"<<endl;
     cout<<"5.Total Students"<<endl;
     cout<<"6.Visit"<<endl;
     cin>>n;
//     switch(n){
//     case 0: return 0;
//     break;
//     case 1:cout<<"\nEnter id to insert: ";
//            cin>>val;
//            cout<<"Enter cgpa: ";
//            cin>>cgpa;
//            if(val > 0 && cgpa >=0 && cgpa <= 4){
//            Insert(val, cgpa);
//            visit(root);
//            };
////            else cout<<"Invalid entry!"<<endl;
//            break;
//    case 2:cout<<"\nEnter id you want to remove: ";
//          cin>>val;
//          Delete(val);
//          visit(root);
//          break;
//    case 3:cout<<"\nEnter ID: ";
//            cin>>val;
//            showData(val);
//            break;
//    case 4:cout<<"Height of the BST: "<<FindHeight(root)<<endl;
//    break;
//    case 5:cout<<"Total Number of Students: "<<TotalStudents(root)<<endl;
//    break;
//    case 6:visit(root);
//    break;
//    }
//    return main();}}

        if(n==0) return 0;

        else if(n==1){
            cout<<"\nEnter id to insert: ";
            cin>>val;
            cout<<"Enter cgpa: ";
            cin>>cgpa;
            if(val > 0 && cgpa >=0 && cgpa <= 4){
            Insert(val, cgpa);
            visit(root);
            }
            else cout<<"Invalid entry!"<<endl;
        }
        else if(n==2){
          cout<<"\nEnter id you want to remove: ";
          cin>>val;
          Delete(val);
          visit(root);
        }
        else if(n==3){
            cout<<"\nEnter ID: ";
            cin>>val;
            showData(val);
        }
        else if(n==4){
            cout<<"Height of the BST: "<<FindHeight(root)<<endl;
        }
        else if(n==5){
            cout<<"Total Number of Students: "<<TotalStudents(root)<<endl;
        }
        else if(n==6){
            visit(root);
        }
        else{
            cout<<"Invalid choice!. Enter again."<<endl;
        }
    }

    return 0;
}
