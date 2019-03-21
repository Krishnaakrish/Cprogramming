#include <stdio.h>
#include<string.h>
void main() 
{
	char s[100],x[100];
	scanf("%s %s",s,x);
	if(strlen(s)==strlen(x+1))
	{
	printf("yes");
	}
	else
		printf("no");
	
}
