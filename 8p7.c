#include <stdio.h>
void main() 
{
	int n,a[30],i,count=1,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		  if(a[i-1]<a[i])
		    {
		        count++;
		    }
		    else
		    {
		        if(max<count)
		        {
		            max=count;
		        }
		        count=1;
		    }
		}
		if(count>max)
			     printf("%d",count);
		else
	            printf("%d",max);
	}
