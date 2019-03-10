#include<stdio.h>
void main()
{
    long int a,b,c,ans,s=1,i;
    scanf("%ld %ld %ld",&a,&b,&c);
    for(i=1;i<=b;i++)
    s*=a;
    ans=s%c;
    printf("%ld",ans);
 }
