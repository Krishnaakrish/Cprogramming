#include<stdio.h>
void main()
{
    char a[30],b,c;
    int i;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(i%2!=0)
        {
            b=a[i];
            c=a[i-1];
            a[i-1]=b;
            a[i]=c;
            
        }
    }    
    puts(a);
    
}
