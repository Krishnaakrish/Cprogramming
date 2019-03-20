#include<stdio.h>
void main()
{
    int coin,player,r;
    scanf("%d%d",&coin,&player);
    r=coin%player;
    if(r==0)
    {
    printf("%d",player);
    }
    else
    {
    printf("%d",r);
    }
}
