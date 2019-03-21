#include<stdio.h>
void main()
{
int i,j,c=0;
char a[20];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
c++;
for(i=0;i<c;i++)
{
for(j=i+1;j<c;j++)
    if(a[i]==a[j])
        a[j]='\0';
}
j=0;
for(i=0;i<c;i++)
{
if(a[i]!='\0')
{
a[j]=a[i];
j++;
}
}
a[j]='\0';
printf("%s",a);
}
