#include<stdio.h>
void main()
{
    int a,b,f=1,i,ans;
    scanf("%d %d",&a,&b);
    if(a-b<=5)
    {
    for(i=1;i<=a;i++)
     f=f*i;
    a=f;
    f=1;
    for(i=1;i<=b;i++)
    f=f*i;
    b=f;
    ans=a/b;
    printf("%d",ans);
    }
  
}
