#include<stdio.h>
void main()
{
    int a,rem,ans=1;
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
ans=ans*rem;
        a=a/10;
    }
    printf("%d",ans);
}
