#include <stdio.h>
void main() {
	int n,a[20],max,r,c,i,j;
	scanf("%d",&n);
	max=n;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	r=a[0];
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
				c+=1;
			
		}
		if(max>c)
		{
			max=c;
			r=a[i];
		}
		
	}
	printf("%d",r);
}
