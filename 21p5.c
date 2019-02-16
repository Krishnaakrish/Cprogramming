#include<stdio.h>
void main()
{
    char a[30];
    int i;
    gets(a);
    for(i=0;a[i]!=NULL;i++){
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }
    }
    puts(a);
}
