#include<stdio.h>
void main()
{
    long int n,sum=0,i,j,a[100000];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
   scanf("%ld",&a[i]);
     for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        sum=sum+a[i+1];
        else
        sum=sum+a[i];
   }
    printf("%ld",sum);
}
