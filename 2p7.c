#include<stdio.h>
void main()
{
int l,r,i;
scanf("%d%d",&l,&r);
for(i=1;i<=l*r;i++)
{
    if(i%l==0&&i%r==0)
    {
        printf("%d",i);
        break;
    }
}

}
