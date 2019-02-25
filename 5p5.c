#include <stdio.h>
void main()
{
    int i,j,a,p,perimeter,area,flag=0;
	scanf("%d %d",&p,&a);
	for(i=1;i<=p;i++)
	{
	    for(j=1;j<=p;j++)
	{
	    perimeter=2*(i+j);
	    area=i*j;
	    if(perimeter==p && area==a)
	    {
	        
	        flag=1;
	        printf("yes");
	        break;
	    }
	}
	if(flag==1)
	{
	break;
	}
	}
	if(flag==0)
	{
	    printf("no");
	}
}
