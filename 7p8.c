#include <stdio.h>
void main() 
{
	int n,a[30],i,j,temp=0,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		c=1;
	    for(j=i+1;j<n;j++)
	    {
			if(a[i]==a[j])
			c++;
	    }
	    if(c>temp)
		     temp=c;
		}
	printf("%d",temp);
}
