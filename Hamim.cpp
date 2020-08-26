#include<iostream>
#include<iomanip>

using namespace std;
int visited[20];
int x,v,i,j,mat[20][20], A[25][25];

void DFS(int i)
{
    int j;
    cout<<i;
    visited[i]=1;
    for(j=0;j<v;j++)
        if(!visited[j]&&mat[i][j]==1)
            DFS(j);
}
void PrintMat(int mat[][20], int n)
{
	int i, j;

	cout<<"\n\n"<<setw(4)<<"";
	for(i = 0; i < n; i++)
		cout<<setw(3)<<"("<<i+1<<")";
	cout<<"\n\n";

	// Print 1 if the corresponding vertexes are connected otherwise 0.
	for(i = 0; i < n; i++)
	{
		cout<<setw(3)<<"("<<i+1<<")";
		for(j = 0; j < n; j++)
		{
			cout<<setw(4)<<mat[i][j];
		}
		cout<<"\n\n";
	}
}


int main(){
int x,v,i,j,mat[20][20], A[25][25];
cout<<"Options: "<<endl;
cout<<"1.Input graph(adjacency matrix)"<<endl;
cout<<"2.DFS operation"<<endl;
cout<<"3.BFS operation"<<endl;
cout<<"Enter your choice: ";
//cin>>x;
//switch(x){
//case 1:
//{
    cout<<"Enter the number of vertexes: ";
	cin>>v;

	cout<<"\n";
	// Take input of the adjacency of each pair of vertexes.
	for(i = 0; i < v; i++)
	{
		for(j = i; j < v; j++)
		{
			if(i != j)
			{
				cout<<"Enter 1 if the vertex "<<i+1<<" is adjacent to "<<j+1<<", otherwise 0: ";
				cin>>mat[i][j];

				mat[j][i] = mat[i][j];
			}
			else
				mat[i][j] = 0;
		}
	}
mat[i][j]=A[i][j];
PrintMat(mat, v);
//case 2:
    for(i=0;i<v;i++)
        visited[i]=0;

    DFS(0);}
