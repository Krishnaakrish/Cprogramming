#include<stdio.h>
void main()
{
    int a,b,i,pow=10;
    scanf("%d%d",&a,&b);
    while(b>=pow){
    pow*= 10;
    }
    i=a*pow+b;        
    printf("%d",i);
}
