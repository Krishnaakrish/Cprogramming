#include<stdio.h>
#include<math.h>
void main() {
	int a,d,n,i,t;
	int sum=0;
	scanf("%d",&a);
	scanf("%d",&d);
	scanf("%d",&n);
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
	t= a + (n-1) * d;
	for (i=a;i<=t; i= i + d ) {
		if (i != t)
        {}
		else
		printf("%d ",sum);
	}
	
}
