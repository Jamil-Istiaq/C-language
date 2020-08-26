#include <stdio.h>
 #include <stdbool.h>
 #include <conio.h>
 #include <windows.h>
 typedef struct{
        char studID[6];
        char fname[30];
        char lname[30];
        char mname[3];
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
void viewAll(nd);
nd searchNode(nd *,nd *,char[]);

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
     char lnam[20];
     char fnam[30];
     char mnam[3];
     float qp;
     STUD st;

     printf("Enter Student ID: /n");
     gets(sID);
     printf("Enter Student's Last Name: /n");
     gets(lnam);
     printf("Enter Student's First Name: /n");
     gets(fnam);
     printf("Enter Student's Middle Initial(s): /n");
     gets(mnam);
     printf("Enter Student's QPA: /n");
     scanf("%f", &qp);
     strcpy(st.studID, sID);
     strcpy(st.lname, lnam);
     strcpy(st.fname, fnam);
     strcpy(st.mname, mnam);
     st.qpa=qp;

//     temp = malloc(sizeof(NODE));
     temp -> stu = st;
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
     char lnam[20];
     char fnam[30];
     char mnam[3];
     float qp;
     STUD st;

     printf("Please enter the ID of the Student you would like to edit: ");
     gets(sID);

     if(strcmp(sID,st.studID)==0)
     {
         printf("Enter Student ID: /n");
         gets(sID);
         printf("Enter Student's Last Name: /n");
         gets(lnam);
         printf("Enter Student's First Name: /n");
         gets(fnam);
         printf("Enter Student's Middle Initial(s): /n");
         gets(mnam);
         printf("Enter Student's QPA: /n");
         scanf("%f", &qp);
         strcpy(st.studID, sID);
         strcpy(st.lname, lnam);
         strcpy(st.fname, fnam);
         strcpy(st.mname, mnam);
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
 //        t = searchNode(root,&t1,iD[]);
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
//                   t1 -> stu.studID = t -> stu.studID;
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
           //if (strcmp(iD,t1 -> stu.studID) <0)
              t = t -> left;
          // else
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
{
     if (ptr != NULL)
     {
//          viewall(ptr->left);
//          printf("Student ID: %s", stu.studID );
//          printf("First Name: %s", stu.fName);
//          printf("Middle Initial: %s", stu.mName);
//          printf("Last Name: %s", stu.lName);
//          printf("QPA: %f", stu.qpa);
//          viewall(ptr->right);

    }
     return;
}
