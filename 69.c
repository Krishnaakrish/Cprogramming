#include<stdio.h>
void main()
{
int n,rem=0,c=0;
scanf("%d",&n);
while(n)
{
n=n/10;
c++;
}
printf("%d\t",c);
}
