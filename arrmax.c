#include<stdio.h>

main()
{
int i,n,a[10],max=0;

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
getch();
}
