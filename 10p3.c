#include<stdio.h>
void main()
{
    long int n,a[100],i,t;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
     scanf("%ld",&a[i]);
   for(i=0;i<n-1;i++)
          if(i%2==0)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
   
    for(i=0;i<n;i++)
        printf("%ld ",a[i]);
   
}   
