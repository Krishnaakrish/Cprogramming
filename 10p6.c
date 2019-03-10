#include <stdio.h>
void main()
{
    long int n,t,c=1;
    int sum,rem,a,b;
    scanf("%ld",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        c=c*10;
    }
    c=c/10;
        a=n/c;
        b=n%10;
        sum=a+b;
    printf("%d ",sum);
}
