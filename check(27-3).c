#include<stdio.h>

void main()
{
    int a[30],b[30],c,n,i,j,k,l1,l2,e,e1,e2,l,temp=0;
  
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=1;
    l1=1;
    l2=1;
    j=0;
    for(i=0;i<n;i++)
    {

	if(a[i]%2==0)
	{
	    l=0;
	    e1=i;
	    for(j=e1;i<n;j++)
	    {
		if(a[j]%2==0)
		{
		    l++;
		}
		else
		   break;
	    }
	    if(l>temp)
	    {
		e=e1;
		temp=l;
	    }
	    i=j-1;
	}
    }
    
    printf("%d %d",e,l);

}
