#include<stdio.h>
int main()
{
    int i,j=0,k,count=0,len=0,len2=0;
    char a[100],b[100];
    gets(a);
    gets(b);
    for(j=0;b[j]!='\0';j++)
            {
                len++;
                }
    for(j=0;a[j]!='\0';j++)
            {
                len2++;
                }
    if(len==len2)
    {
        for(i=0;i<len;i++)
        {
            if(a[i]==a[i+1]&&b[i]==b[i+1])
            {
                count++;
            }
             if(a[i]!=a[i+1]&&b[i]!=b[i+1])
            {
                count++;
            }
        }
        if(len==count)
        {
            printf("yes");
        }
        else
        {
        printf("no");
    }
    }
    else
        {
        printf("no");
    }
    getch();
}

