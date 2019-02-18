#include<stdio.h>
void main()
{
    int x1,y1,x2,y2,x3,y3;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if((x1==x2)&&(x1==x3)||(y1==y2)&&(y1==y3))
    printf("yes");
    else if((x1==y1)&&(x2==y2)&&(x3==y3))
    printf("yes");
    else
    printf("no");
}
