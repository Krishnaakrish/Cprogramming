#include <stdio.h>
void main()
{
    int n,a[30],i,max=0,min=0,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=min=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        x=i;
        }
        else if(a[i]<min)
        {
        min=a[i];
        y=i;
        }
    }
    printf("%d",x-y);
 }
