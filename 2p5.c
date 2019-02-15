#include<stdio.h>
void main()
{
    char a[50],b;
    int i,j,c,temp=0;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        c=1;
        if(a[i]!='$')
        {
            for(j=i+1;a[j]!=NULL;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    a[j]='$';
                }
            }
            if(c>temp)
            {
                temp=c;
                b=a[i];
            }
        }
    }
    printf("%c",b);
}
