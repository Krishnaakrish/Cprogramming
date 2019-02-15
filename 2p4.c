#include<stdio.h>
void main()
{
   char a[30],b[30];
   int i,j,n,k=0;
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       scanf("%c",&a[i]);
       }
    a[i]=='\0';
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'){
            b[k]=a[i];
            k++;
        }
    }
    b[k]='\0';
    for(i=k-1;i>=0;i--)
    {
        printf("%c",b[i]);
    }
}
