
#include <stdio.h>
void main()
{
	char a[50],b[50];
	int i,al=0,bl=0,c=0;
	gets(a);
	gets(b);
	for(i=0;a[i]!=NULL;i++)
	al++;
	for(i=0;b[i]!=NULL;i++)
	bl++;
	if(al==bl)
	{
	for(i=0;a[i]!=NULL;i++)
	{
	    if(a[i]!=b[i])
	    {
	        c=1;
	        break;
	    }
	    
	}
	}
	if(al!=bl||c==1)
	printf("no");
	else
	printf("yes");
}
