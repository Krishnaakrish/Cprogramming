#include<stdio.h>
void main()
{
    int a[100],i,n,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
          scanf("%d",&a[i]);
    b=a[0];
    for(i=0;i<n-1;i++)
          b=(b)^(a[i+1]);
    printf("%d",b);
       
}
