#include <stdio.h>

void main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	num+=1;
	while(num%10!=0)
	{
		num=num+1;
	}
	printf("\n%d",num);

}
