#include<stdio.h>
void main()
{
    long int a,b,sum=0,i;
    scanf("%ld %ld",&a,&b);
    for(i=a;i<=b;i++)
        if(i%2!=0)
            sum=sum+i;
    printf("%ld",sum);
}
