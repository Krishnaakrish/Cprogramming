#include <stdio.h>

void main()
{
int a,i,j,f=0;
scanf("%d",&a);
for(i=2;i<=a;i++)
{   
    f=0;
  for(j=2;j<=i/2;j++)
  {
    if(i%j==0)
      f=1;  
  }
    if(f==0&& a%i==0)
     printf("%d ",i);
}
}
