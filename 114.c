#include<stdio.h>
main() 
{
	int a,b,i,ans=1;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++){
	ans=ans*a;
  }
	printf("%d",ans);
}
