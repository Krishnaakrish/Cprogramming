#include<stdio.h>
void main()
{
int i,c,j,n,a[10],max=0,k;
clrscr();
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=n+1-k;
for(j=0;j<k;j++)
{
max=0;
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
c=i;
}
}
a[c]=0;
}
printf("%d",max);
}
