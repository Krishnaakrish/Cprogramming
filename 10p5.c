#include <stdio.h>
void main()
{
    long int n,a[100],i=0,k,p,t,s,c=1,rem;
    scanf("%ld %ld %ld",&n,&k,&p);
    t=n;
    while(t>0)
    {
        t=t/10;
        c=c*10;
    }
    c=c/10;
    while(n>0)
    {
        rem=n/c;
        a[i]=rem;
        i++;
        n=n%c;
        c=c/10;
    }
    while(k>0)
    {
        s=a[p];
        k--;
        p++;
    }
    printf("%ld ",s);

}
