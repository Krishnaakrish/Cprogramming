#include <stdio.h>

 

void main()

{

int x,y,temp;

printf("\n enter two numbers to swap:");

scanf("%d %d",&x,&y);

printf("\n before swapping:");

printf("\nx=%d",x);

printf("\ny=%d",y);

temp=x;

x=y;

y=temp;

printf("\n after swapping:");

printf("\nx=%d",x);

printf("\ny=%d",y);



}
