#include<stdio.h>
void main()
{
   int a,n,rem,sum=0;
   scanf("%d",&a);
   n=a;
   while(n)
   {
       rem=n%10;
       sum=sum+(rem*rem);
       n/=10;
   }
   printf("%d",sum);
}
