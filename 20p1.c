#include <stdio.h>

void main()
{
    int N,a[100],b[100],c[100],i,j,k=0,d;
   scanf("%d",&N);
   for(i=0;i<N;i++)
  scanf("%d",&a[i]);
  
   for(i=0;i<N;i++)
  scanf("%d",&b[i]);
 
for(i=N-1;i>=0;i--)
{
    
    c[k]=b[i];
    k++;
}
   
  for(i=0;i<N;i++)
  {
      
      if(a[i]==c[i])
      d++;
   
  }
   
   
   if(d==N)
   printf("yes");
   else
   printf("no");
 
}
