#include <stdio.h>
void main() 
{
	int a[100],n,c=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		c++; 
		if(a[i]!=0) 
		printf("%d ",a[i]);
	
	}
	for(j=0;j<c;j++)
		printf("%c ",'0');


}
