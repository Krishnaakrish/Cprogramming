#include <stdio.h>

void main()
{
    char a[100],b[100];
    int i,c=0,j;
    scanf("%s",&a);
    
    for(i=0;a[i]!='\0';i++)
    c++;
    
    j=0;
    for(i=c-1;i>=0;i--)
    {
    b[j]=a[i];
    j++;
    }
    b[j]='\0';
    printf("%s",b);
    
    
}
