
#include <stdio.h>
void main()
{
	signed long n;
	scanf("%ld",&n);
    if(n>=-2147483648&&n<=2147483647)
	{
	    printf("INT");
	}
	else
	{
	    printf("LONG");
	}
	
}
