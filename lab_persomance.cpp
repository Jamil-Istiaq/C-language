#include <iostream>

using namespace std;

class List
{
    private:
        struct node
        {
            int data;
            node* next;
        };

        node* head;
        node* curr;
        node* temp;

    public:
        List ()
        {
            head = NULL;
            curr = NULL;
            temp = NULL;
        }
        void Insert (int x)
        {
            node* n = new node();
            n -> data = x;
            n -> next = NULL;

            if (head != NULL)
            {
                curr = head;

                while (curr -> next != NULL)
                    curr = curr -> next;

                curr -> next =n;
            }
            else
            {
                head = n;
            }
        }
        void Delete (int y)
        {
            node* d = NULL;
            curr = head;
            temp = head;

            while (curr != NULL && curr -> data != y)
            {
                temp = curr;
                curr = curr -> next;
            }

            if (curr == NULL)
            {
                delete d;
            }
            else
            {
                d = curr;
                curr = curr -> next;
                temp -> next = curr;
                    if (d == head)
                    {
                        head = head -> next;
                        temp = NULL;
                    }
                delete d;
            }
        }

        void Search (int y)
        {
            node* d = NULL;
            curr = head;
            temp = head;

            while (curr != NULL && curr -> data != y)
            {
                temp = curr;
                curr = curr -> next;
            }

            if (curr == NULL)
            {
                cout << "\nValue " <<y<< " was not found!!! \n";
            }
            else
            {
                d = curr;
                curr = curr -> next;
                temp -> next = curr;
                    if (d == head)
                    {
                        head = head -> next;
                        temp = NULL;
                    }
                cout << "\nValue "<< y<<" was found.\n";
            }
        }
        void Print ()
        {
            curr = head;
            while (curr != NULL)
            {
                cout << curr -> data << endl;
                curr = curr -> next;
            }
        }
void insertionsort()
             {
             node *i,*j;
             int min;
             for(i=head->next;i!=NULL ;i=i->next)
             {
              min=i->data;
             for(j=i->next;j!=NULL && j->data > min ;j=j->next)
             {
             i->data=j->data;
             j->data=min;}}}};



int main ()
{int x,y;
    List a;
    a.Insert(9);
    a.Insert(12);
    a.Insert(5);
    a.Insert(1);
    a.Insert(8);
    a.Print();
    cout<<"Enter a search value:";
    cin>>y;
    a.Search(y);
    cout<<endl;
    cout<<"Enter the delete value:";
    cin>>y;
    a.Delete(y);
    a.Print();
    cout<<endl;


}
