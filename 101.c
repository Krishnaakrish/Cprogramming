#include<stdio.h>
void main()
{
int a,b,c,v,area;
scanf("%d %d %d",&a,&b,&c);
area=2*(a*b)+2*(a*c)+2*(c*b);
v=a*b*c;
printf("%d %d",area,v);
}
