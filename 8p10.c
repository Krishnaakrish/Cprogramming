#include <stdio.h>
void main() {
	int a[10],i,j,temp,n,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
        if(a[i]>a[j])
             {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
             }
             ans=a[2]-a[1];
             printf("%d",ans);
            
}
