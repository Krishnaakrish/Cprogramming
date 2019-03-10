#include<stdio.h>
void  main()
{
    long int n,k;
    float t;
    scanf("%ld %ld",&n,&k);
    if(n>=1 && n<=1000)
    {
        t=n>>k;
    printf("%.2f",t);
    }
}
