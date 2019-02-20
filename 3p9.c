#include<stdio.h>
void main()
{
    int in,f,i,c=0;
    scanf("%d%d",&in,&f);
    for(i=1;i<=f;i++)
    {
        if(i==sqrt(i*i)){
            if((i*i>=in)&&(i*i<=f)){
        c++;
            }
        }
        
    }
    printf("%d",c);
    
}
