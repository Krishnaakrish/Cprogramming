#include<stdio.h>
void main()
{
    char a[30];
    int i=0;
    gets(a);
    if(a[0]>='a'&&a[0]<='z')
    a[0]-=32;
    for(i=1;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]>='a'&&a[i+1]<='z')
            a[i+1]-=32;
        }
    }
    puts(a);
}
