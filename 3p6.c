#include<stdio.h>
void main()
{
    char a[50];
    int i,j,k,l;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if((a[i-1]==' '&&a[i]==' ')||a[i-1]=='$'){
        a[i]='$';
        }
    }
    for(i=0;a[i]!=NULL;i++){
       if(a[i]!='$')
        printf("%c",a[i]);
    }
}
