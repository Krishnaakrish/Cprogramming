#include <stdio.h>
void main()
{
   int n,i,c=0;
   scanf("%d",&n);
   for(i=0;i<=100;i++)
    if(n%3==0 || n%7==0 ||n%(3+7)==0)
        c++;
   
   if(c>0)
    printf("yes");
    else
    printf("no");
}
