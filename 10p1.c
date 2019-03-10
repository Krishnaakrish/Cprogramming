#include<stdio.h>
void main()
{
   long int a,bin=0,rem,p=1;
   scanf("%ld",&a);
    while(a>0)
    {
        rem=a%2;
        bin=bin+rem*p;
        p=p*10;
        a=a/2;
    }
    printf("%ld",bin);
}   
