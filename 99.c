#include<stdio.h>
void main()
{
char a[10];
int l,i,j,temp;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("%s",a);
}
