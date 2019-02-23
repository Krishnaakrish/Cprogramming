
#include <stdio.h>
void main()
{
	char a[50],b,c=0;
	int i;
	
	gets(a);
	scanf("%c",&b);
	for(i=0;a[i]!=NULL;i++)
	{
	    if(a[i]==b)
	    {
	        c=i+1;
	        break;
	    }
	}
	if(c!=0)
	printf("%d",c);
	else
	printf("no");
	
	
}
