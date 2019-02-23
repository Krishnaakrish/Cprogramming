
#include <stdio.h>
void main()
{
	char a[50];
	int i,l=0;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	l++;
	printf("%d",l);
}
