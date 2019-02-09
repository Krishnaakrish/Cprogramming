#include <stdio.h>
 
void main()
{
	int num,even;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		even=num;	
	}
	else
	{
		even=num-1;
	}
	printf("\n%d",even);
 
}
