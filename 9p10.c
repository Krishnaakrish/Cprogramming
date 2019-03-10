#include<stdio.h>
int fact(int x)
{
   int f=1,i;
    for(i=1;i<=x;i++)
         f*=i;
    return f;
}
void main()
{
    long int n,k,m;
    float t;
    scanf("%ld %ld",&n,&k);
    if(k<=n && k<=10)
    {
        m=n-k;
        n=fact(n);
        k=fact(k);
        m=fact(m);
        t=n/(k*m);
        printf("%.0f",t);
    }
}
