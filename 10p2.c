#include<stdio.h>
void main()
{
    long int a,dec=0,rem,p=1;
    scanf("%ld",&a);
    while(a>0)
    {
        rem=a%10;
        dec+=rem*p;
        p*=2;
        a/=10;
    }
    printf("%ld",dec);
}   
