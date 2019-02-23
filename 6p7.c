
#include <stdio.h>
void main()
{
	char a[50],b;
	int i,c=0;
		gets(a);
	scanf("%c",&b);
	for(i=0;a[i]!=NULL;i++)
	{
	    if(a[i]==b)
	    {
	        c++;
	        
	    }
	}
	if(c!=0)
	printf("%d",c);
	else
	printf("no");
	
	
}
