#include<stdio.h>
void main()
{
    int a[30],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}
