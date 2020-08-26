#include <iostream>
#include <cstdlib>
using namespace std;

struct nodetype
{
       int adata;         //Defines user data type
       nodetype *ptr;     //which is the node for the linked list
};

void acreate(nodetype *&start);     //passing reference parameter
void atraverse(nodetype *start);    //passing value parameter
void asort (nodetype *start);
//void asearch (nodetype *start);
//void ainsert (nodetype *start);
void amenu();

int main()
{
    nodetype *start;      //Declare node struct variable
    int aopt;

    do
    {
        amenu();
        cin >> aopt;
        switch (aopt)
        {
               case 1:
                    acreate (start);
                    break;
               case 2:
                    atraverse(start);
                    break;
               case 3:
                    asort (start);
                    break;
  //             case 4:
    //                asearch(start);
      //              break;
        }
      system("PAUSE");
      }while (aopt != 5);
      return 0;
}

void acreate (nodetype *&start)
{
     nodetype *lastentry, *newnode;
     int info;

     start = new nodetype;
     start->ptr = NULL;
     lastentry = start;

     cout << "input an integer value, '999' to exit ";
     cin >> info;
     cout << endl;
     while(info != 999)
     {
         newnode = new nodetype;     //create node and pass address of where node is
         newnode->adata = info;      //put data into adata field of node
         newnode->ptr = NULL;        //put NULL into ptr field of node
         lastentry->ptr = newnode;   //connect node
         lastentry = newnode;        //set up to create next node, if needed
         cout << "Input an integer '999' to exit ";
         cin >> info;
         cout << endl;
     }
}

void atraverse (nodetype *start)
{
     nodetype *entry;

     entry = start->ptr;
     cout << "Linked List " << endl;
     while (entry != NULL)
     {
           cout << "Data is " << entry->adata << endl;
           entry = entry -> ptr;
     }
}

void asort (nodetype *start)
{
     nodetype *next, *last;
     int aflag;
     do
     {
         aflag = 0;
         while(next != NULL)
         {
               for (last = next->ptr; last != NULL; last = last->ptr)
               {
                   if (next->adata  > last->adata)
                   {
                         int temp = next->adata;
                         next->adata = last->adata;
                         last->adata = temp;
                         //aflag = 1;
                   }
               }
               last = last->ptr;
               next = next->ptr;
         }
     }while (aflag != 1);
     cout << "Sorting done" << endl;
}

/*void asearch (nodetype *start)
{
     int akey, info;
     cout << "Enter element to be search: " <<endl;
     cin >> akey;
     while (start->ptr != NULL)
     {
        if(start -> adata == akey)
        {
             cout << "Element found" << endl;
        }
        start = start->ptr;
     }
     cout << "Element not found" <<endl;
}

*/


/*void ainsert(*start)
{
     nodetype *head, *p, *q, *newNode;


       */
void amenu()
{
     system ("cls");
     cout << "Linked List Program \n " << endl;
     cout << "1. Create and Input Node " << endl;
     cout << "2. Output nodes" << endl;
     cout << "3. Sort" << endl;
     cout << "4. Search" << endl;
     cout << "5. Exit " << endl;
     cout << " ** Input option 1-5 to execute ** ";
}


