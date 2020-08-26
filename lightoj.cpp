#include<bits/stdc++.h>

#include <stdlib.h>
  int main()
  {
    int c = 0;
    int maxi=10;

    scanf("%d",&c);
    int t[c];

    for(int i=0; i<c; i++)
      scanf("%d",&t[i]);

    for(int i=0; i<c; i++)
    {
      int com1 = t[i],com2 = 0;
      if (t[i] > 10)
      {
         com1 = 10;
         com2 = t[i]-com1;
      }
      printf("%d %d\n",com1,com2);
    }
    return 0;}
