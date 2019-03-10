#include<stdio.h>
void main()
{
    long int n, oct=0,rem,p=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        oct=oct+rem*p;
        p=p*2;
        n=n/10;
    }
    printf("%lo",oct);
    
}
