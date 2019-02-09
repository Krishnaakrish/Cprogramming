#include<stdio.h>
void main()
{
int a,b,x=0;
scanf("%d %d",&a ,&b);
x=(a>b)?a:b;
if(x%a==0 && x%b==0)
printf("%d",x);
}
