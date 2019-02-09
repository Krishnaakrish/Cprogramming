#include<stdio.h>
void main()
{
    int a,rem,r=0;
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
        r=r*10+rem;
        a=a/10;
    }
    printf("%d",r);
}
