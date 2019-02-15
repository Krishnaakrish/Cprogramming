#include<stdio.h>
void main()
{
    char a[30],b[30];
    int i=0,c=0;
    gets(a);
    gets(b);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    if(c==1)
    printf("yes");
    else
    printf("no");
    
}
