#include <stdio.h>
void main()
{
    int a,b,c=1,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
          c=c*a;
    printf("%d",c);
}
