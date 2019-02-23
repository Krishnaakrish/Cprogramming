
#include <stdio.h>
void main()
{
	char a[50],b[50];
	int i,j,c=0;
		gets(a);
	gets(b);
	for(i=0;a[i]!=NULL;i++)
	{
	    for(j=0;b[j]!=NULL;j++)
	    {
	        if(a[i]==b[j])
	        {
	            c=1;
	            break;
	        }
	    }
	}
	if(c!=0)
	printf("yes");
	else
	printf("no");
	
	
}
