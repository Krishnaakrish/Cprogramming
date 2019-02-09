#include<stdio.h>
void main()
{
int a1,b1,gcd=0;
scanf("%d %d",&a1,&b1);
gcd=(a1<b1)?a1:b1;
if(a1%gcd==0 && b1%gcd==0){
printf("%d",gcd);
}
}
