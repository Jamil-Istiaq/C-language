#include<iostream>
using namespace std;


int a[100];
char a[100];
//double a[100];
int i,n,j;
int temp;

void create()
{
cout<<"Enter the size of the array elements:"<<endl;
cin>>n;
cout<<"Enter the elements for the array: "<<endl;
        for(i=0;i<n;i++)
        {
                cin>>a[i];
        }
}
void display()
{
        int i;
        cout<<"The array elements are: "<<endl;
        for(i=0;i<n;i++){
                 cout<<a[i]<<" ";
                 cout<<"\n";
         }
 }
void bubbleShort(){

for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }

    cout<<"Array after bubble sort:"<<endl;
    for(i=0;i<n;++i)
        cout<<" "<<a[i];}


void selectionShort(){
for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}}

void insertionShort(){
for(i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j]) && (j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}}
void option(){
    int x;
    cout<<"Chose any algorithm for shorting"<<endl;
    cout<<"1. Bubble sort"<<endl;
    cout<<"2. Selection sort"<<endl;
    cout<<"3. Insertion sort"<<endl;
    cin>>x;
    switch(x){
    case 1:bubbleShort();
    break;
    case 2:selectionShort();
    break;
    case 3: insertionShort();
    break;
    default:
      cout<<"\nError in figure code"<<endl;
      break;
	}
}

int main(){
    int x;
    create();
    display();
    option();
}

