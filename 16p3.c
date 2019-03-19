#include <stdio.h>

void main()
{
	char str[30];
	int i,k;
	scanf("%s %d",str,&k);
	for(i=k-1;str[i]!='\0';i=i+k)
		printf("%c ",str[i]);
}
