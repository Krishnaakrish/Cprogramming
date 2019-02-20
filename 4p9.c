#include<stdio.h>
void main()
{
  int n,i,mul=1,c=0;
  scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {
     mul*=2;
     if(mul==n)
     {
         printf("yes");
         c=1;
        break;
     }
 }
 if(c==0)
 printf("no");
}
