#include <iostream>

using namespace std;

 

void Merger(int a[], int p, int  r, int q){
    int *temp = new int[q-p+1];
    int i = p, j = r+ 1;
    int k = 0;
    while(i <= r && j <=q){
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while(i <= r)
        temp[k++] = a[i++];
    
    while(j <= q)
        temp[k++] = a[j++];
    
    for(k = 0, i = p; i <= q; ++i, ++k)
        a[i] = temp[k];
 
    delete []temp;
}
void MergeSortHelper(int a[], int p, int q){
    int r;
    if(p < q){
        r = (p + q) -1;
        MergeSortHelper(a,p, r);
        MergeSortHelper(a, r+1, q);
        Merger(a,p,r, q);
    }
}
void MergeSort(int a[], int a_size){
    MergeSortHelper(a, 0, a_size-1);
}
 
int main() {
  int a[] = {7,6,1,3,4,5,2};
  int n = sizeof(a)/sizeof(a[0]);
 
  cout << "Before Merge Sort :" <<endl;
 for (int i = 0; i < n; ++i)
    cout << a[i] << " ";
  cout <<endl;
 
  MergeSort(a, n);
 
  cout << "After Merge Sort :" <<endl;
 for (int i = 0; i < n; ++i)
    cout << a[i] << " ";
  cout <<endl;
 
  return (0);
}

