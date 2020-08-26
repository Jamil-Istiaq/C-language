#include <stdio.h>
 #include <stdbool.h>
 #include <conio.h>
 #include <windows.h>
 typedef struct{
        char studID[6];
//        char fname[30];
//        char lname[30];
//        char mname[3];
        float qpa;
}STUD;

 typedef struct node *nd;
 struct node
 {
        STUD stu;
        nd left;
        nd rigth;
}NODE;


void inputStud(nd *);
bool treeEmpty(nd *);
void deleteNode(nd *);
void editStud(nd *);
void viewAll(nd ptr);
nd searchNode(nd *r,nd *t1,char iD[], nd root);

int main(void)
{
    int ans,c;
    bool e;
    nd root = NULL;

    do
    {
         system("cls");
         printf("1] Add New Student Record\n");
         printf("2] Edit Student Record\n");
         printf("3] View Specific Record\n");
         printf("4] Display All\n");
         printf("5] Delete Student Record\n");
         printf("6] Exit\n");
         printf("Pick your choice: ");
         scanf("%d",&ans);
         switch(ans)
         {
              case 1:     inputStud(&root);
                          break;
              case 2:     editStud(&root);
                          break;
              case 3:     viewAll(root);
                          getch();
                          break;
              case 4:     viewAll(root);
                          getch();
                          break;
              case 5:     deleteNode(&root);
                          break;
              case 6:     printf("\n\nclosing the program in 5 seconds....");
//                          sleep(5000);

         }
    }while (ans != 6);
    return 0;
}


void inputStud(nd *root)
{
     nd t, t1, temp;
     char sID[6];
//     char lnam[20];
//     char fnam[30];
//     char mnam[3];
     float qp;
     STUD stu;

     printf("\nEnter Student ID: ");
     scanf("%c",&sID);
     gets(sID);
//     printf("Enter Student's Last Name: /n");
//     gets(lnam);
//     printf("Enter Student's First Name: /n");
//     gets(fnam);
//     printf("Enter Student's Middle Initial(s): /n");
//     gets(mnam);
     printf("\nEnter Student's QPA:");
     scanf("%f", &qp);
     strcpy(stu.studID, sID);
//     strcpy(st.lname, lnam);
//     strcpy(st.fname, fnam);
//     strcpy(st.mname, mnam);
     stu.qpa=qp;

//     temp = malloc(sizeof(NODE));
     temp -> stu;
     temp -> left = NULL;
     temp -> rigth = NULL;

     if (*root == NULL)
     {
          *root = temp;
     }
     else
     {
          t = *root;
          while (t != NULL)
          {
               t1 = t;
               if (strcmp(temp -> stu.studID,t -> stu.studID)==0)
                    t = t -> left;
               else
                    t = t -> rigth;
          }
          if (strcmp(temp -> stu.studID,t1 -> stu.studID) < 0)
              t1 -> left = temp;
          else
              t1 -> rigth = temp;
     }
     t1 = NULL;
     t = NULL;
     temp = NULL;
     return;
}
void editStud(nd *root)
{
     char sID[6];
//     char lnam[20];
//     char fnam[30];
//     char mnam[3];
     float qp;
     STUD st;

     printf("Please enter the ID of the Student you would like to edit: ");
     gets(sID);

     if(strcmp(sID,st.studID)==0)
     {
         printf("Enter Student ID: /n");
         gets(sID);
//         printf("Enter Student's Last Name: /n");
//         gets(lnam);
//         printf("Enter Student's First Name: /n");
//         gets(fnam);
//         printf("Enter Student's Middle Initial(s): /n");
//         gets(mnam);
         printf("Enter Student's QPA: /n");
         scanf("%f", &qp);
         strcpy(st.studID, sID);
//         strcpy(st.lname, lnam);
//         strcpy(st.fname, fnam);
//         strcpy(st.mname, mnam);
         st.qpa=qp;
     }
     else
     {
         printf("Student not found..");
     }
     return;
}

void deleteNode(nd *root)
{
     char iD[6];
     bool e,lmoved = false;
     nd t,t1,t2;
    nd*r;
    STUD st;
     e = treeEmpty(root);
     if (e)
     {
           printf("\n\nSorry, the tree is empty...");
//           sleep(3000);
     }
     else
     {
         printf("Please enter ID of student to be deleted: ");
         gets(iD);
//        t=searchNode(nd *r,nd *t1,char iD[], nd root);
         if (t == NULL)
         {
               printf("\n\n%s not found...",iD);
               //sleep(2000);
         }
         else
         {

                if ((t -> left == NULL)&&(t -> rigth == NULL))
                {
                       if (strcmp( iD, t1 -> stu.studID) <0)
                           t1 -> left = NULL;
                       else
                           t1 -> rigth = NULL;
                }
                else if ((t -> left == NULL)&&(t -> rigth != NULL))
                {

                       if (strcmp( iD,t1 -> stu.studID) <0)
                           t1 -> left = t -> rigth;
                       else
                           t1 -> rigth = t -> rigth;
                }
                else if ((t -> left != NULL)&&(t -> rigth == NULL))
                {

                       if (strcmp( iD,t1 -> stu.studID) <0)
                           t1 -> left = t -> left;
                       else
                           t1 -> rigth = t -> left;
                }
                else
                {

                   t1 = t;
                   t = t1 -> rigth;
                   while(t -> left != NULL)
                   {
                        t2 = t;
                        t = t -> left;
                        lmoved = true;
                   }
                   t1 -> stu = t -> stu;
                   if (t -> rigth == NULL)
                   {
                        if (lmoved)
                            t2 -> left = NULL;
                        else
                            t1 -> rigth = NULL;
                   }
                   else
                   {
                         if (lmoved)
                            t2 -> left = t -> rigth;
                         else
                             t1 -> rigth = t -> rigth;
                   }
                }
                free(t);
                t1 = NULL;
                t2 = NULL;

         }
     }
     return;
}

nd searchNode(nd *r,nd *t1,char iD[], nd root)
{
      nd t;
      t = *r;
      STUD st;
      while((t != NULL) && (strcmp(t -> stu.studID, iD)== 0))
      {
           *t1 = t;
           if ((strcmp(t -> stu.studID,iD) <0))
              t = t -> left;
           else
               t = t -> rigth;
      }
      return t;
}

bool treeEmpty(nd *r)
{
     bool e = false;
     if (*r == NULL)
           e = true;
     return e;
}

void viewAll(nd ptr)
{STUD stu;
     if (ptr != NULL)
     {
          printf("Student ID: %s", stu.studID );
//          printf("First Name: %s", stu.fName);
//          printf("Middle Initial: %s", stu.mName);
//          printf("Last Name: %s", stu.lName);
          printf("QPA: %f", stu.qpa);

    }
     return;
}
# include <iostream>
# include <cstdlib>
using namespace std;
/*
 * Node Declaration
 */
struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root;

/*
 * Class Declaration
 */
class BST
{
    public:
        void find(int, node **, node **);
        void insert(int);
        void del(int);
        void case_a(node *,node *);
        void case_b(node *,node *);
        void case_c(node *,node *);
        void preorder(node *);
        void inorder(node *);
        void postorder(node *);
        void display(node *, int);
        BST()
        {
            root = NULL;
        }
};
/*
 * Main Contains Menu
 */
int main()
{
    int choice, num;
    BST bst;
    node *temp;
    while (1)
    {
        cout<<"-----------------"<<endl;
        cout<<"Operations on BST"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"1.Insert Element "<<endl;
        cout<<"2.Delete Element "<<endl;
        cout<<"3.Inorder Traversal"<<endl;
        cout<<"4.Preorder Traversal"<<endl;
        cout<<"5.Postorder Traversal"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            temp = new node;
            cout<<"Enter the number to be inserted : ";
	    cin>>temp->info;
            bst.insert(int);
        case 2:
            if (root == NULL)
            {
                cout<<"Tree is empty, nothing to delete"<<endl;
                continue;
            }
            cout<<"Enter the number to be deleted : ";
            cin>>num;
            bst.del(num);
            break;
        case 3:
            cout<<"Inorder Traversal of BST:"<<endl;
            bst.inorder(root);
            cout<<endl;
            break;
	case 4:
            cout<<"Preorder Traversal of BST:"<<endl;
            bst.preorder(root);
            cout<<endl;
            break;
        case 5:
            cout<<"Postorder Traversal of BST:"<<endl;
            bst.postorder(root);
            cout<<endl;
            break;
        case 6:
            cout<<"Display BST:"<<endl;
            bst.display(root,1);
            cout<<endl;
            break;
        case 7:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}

/*
 * Find Element in the Tree
 */
void BST::find(int item, node **par, node **loc)
{
    node *ptr, *ptrsave;
    if (root == NULL)
    {
        *loc = NULL;
        *par = NULL;
        return;
    }
    if (item == root->info)
    {
        *loc = root;
        *par = NULL;
        return;
    }
    if (item < root->info)
        ptr = root->left;
    else
        ptr = root->right;
    ptrsave = root;
    while (ptr != NULL)
    {
        if (item == ptr->info)
        {
            *loc = ptr;
            *par = ptrsave;
            return;
        }
        ptrsave = ptr;
        if (item < ptr->info)
            ptr = ptr->left;
	else
	    ptr = ptr->right;
    }
    *loc = NULL;
    *par = ptrsave;
}

/*
 * Inserting Element into the Tree
 */
void BST::insert(node *tree, node *newnode)
{
    if (root == NULL)
    {
        root = new node;
        root->info = newnode->info;
        root->left = NULL;
        root->right = NULL;
        cout<<"Root Node is Added"<<endl;
        return;
    }
    if (tree->info == newnode->info)
    {
        cout<<"Element already in the tree"<<endl;
        return;
    }
    if (tree->info > newnode->info)
    {
        if (tree->left != NULL)
        {
            insert(tree->left, newnode);
	}
	else
	{
            tree->left = newnode;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            cout<<"Node Added To Left"<<endl;
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            (tree->right)->left = NULL;
            (tree->right)->right = NULL;
            cout<<"Node Added To Right"<<endl;
            return;
        }
    }
}

/*
 * Delete Element from the tree
 */
void BST::del(int item)
{
    node *parent, *location;
    if (root == NULL)
    {
        cout<<"Tree empty"<<endl;
        return;
    }
    find(item, &parent, &location);
    if (location == NULL)
    {
        cout<<"Item not present in tree"<<endl;
        return;
    }
    if (location->left == NULL && location->right == NULL)
        case_a(parent, location);
    if (location->left != NULL && location->right == NULL)
        case_b(parent, location);
    if (location->left == NULL && location->right != NULL)
        case_b(parent, location);
    if (location->left != NULL && location->right != NULL)
        case_c(parent, location);
    free(location);
}

/*
 * Case A
 */
void BST::case_a(node *par, node *loc )
{
    if (par == NULL)
    {
        root = NULL;
    }
    else
    {
        if (loc == par->left)
            par->left = NULL;
        else
            par->right = NULL;
    }
}

/*
 * Case B
 */
void BST::case_b(node *par, node *loc)
{
    node *child;
    if (loc->left != NULL)
        child = loc->left;
    else
        child = loc->right;
    if (par == NULL)
    {
        root = child;
    }
    else
    {
        if (loc == par->left)
            par->left = child;
        else
            par->right = child;
    }
}

/*
 * Case C
 */
void BST::case_c(node *par, node *loc)
{
    node *ptr, *ptrsave, *suc, *parsuc;
    ptrsave = loc;
    ptr = loc->right;
    while (ptr->left != NULL)
    {
        ptrsave = ptr;
        ptr = ptr->left;
    }
    suc = ptr;
    parsuc = ptrsave;
    if (suc->left == NULL && suc->right == NULL)
        case_a(parsuc, suc);
    else
        case_b(parsuc, suc);
    if (par == NULL)
    {
        root = suc;
    }
    else
    {
        if (loc == par->left)
            par->left = suc;
        else
            par->right = suc;
    }
    suc->left = loc->left;
    suc->right = loc->right;
}

/*
 * Pre Order Traversal
 */
void BST::preorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        cout<<ptr->info<<"  ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
/*
 * In Order Traversal
 */
void BST::inorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout<<ptr->info<<"  ";
        inorder(ptr->right);
    }
}

/*
 * Postorder Traversal
 */
void BST::postorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->info<<"  ";
    }
}

/*
 * Display Tree Structure
 */
void BST::display(node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->info;
        display(ptr->left, level+1);
    }
}
