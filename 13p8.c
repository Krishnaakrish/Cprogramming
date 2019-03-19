#include <stdio.h>
void main()
{
    int a[100],i,s=1,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
           scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
          s=s*a[i];
  
    if(s%2==0)
         printf("even");
   
    else
          printf("odd");
  
  }
