#include <iostream>
using namespace std;

int main()
{
    int nodes, edges,x,y,i,j;
    cout<<"Enter number of nodes: ";
    cin>>nodes;

    int graph[nodes][nodes];

    cout<<"Enter number of edges: ";
    cin>>edges;

    for(i=1;i<=nodes;i++)
    {
        for(j=1;j<=nodes;j++)
        {
            graph[i][j]=0;
        }
    }

    for(i=1;i<=edges;i++)
    {
        cout<<"Enter x and y: ";
        cin>>x>>y;
        graph[x][y]=1;
    }

    cout<<"Printing Graph..."<<endl;
    for(i=1;i<=nodes;i++)
    {
        for(j=1;j<=nodes;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
MST_prim(){
    int source;
    cout<<"Enter the source: ";
    cin>>source;

struct node {
   int data;
   int priority;
   struct node *next;
};
node *front = NULL;

void insertPQ(int data, int priority) {
   node *temp, *ptr;
   temp = new node;
   temp->data = data;
   temp->priority = priority;

   if (front == NULL || priority < front->priority) {
      temp->next = front;
      front = temp;

   } else {
      ptr = front;
      while (ptr->next != NULL && ptr->next->priority <= priority)
      ptr=ptr->next;
      temp->next = ptr->next;
      ptr->next = temp;
   }
}    
{graph[i]=-1;

}
}
