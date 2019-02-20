#include<stdio.h>
void main()
{
    char a[30];
    int i,c1=0,c2=0,c3=0;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='(')
        c1++;
        if(a[i]==')')
        c2++;
        if(a[i]!='('&&a[i]!=')')
        c3++;
        }
        if(c1==c2&&c3==0)
        printf("yes");
        else
        printf("no");
}
