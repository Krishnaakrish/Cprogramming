#include<stdio.h>
void main()
{
    int a,b,i,pw=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        pw*=b;
        if(pw==a)
        {
            printf("yes");
            a=0;
            break;
        }
        
        }
        if(a!=0)
        printf("no");
        
    
}
