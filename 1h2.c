#include<stdio.h>
void main()
{
int n,a[20],b[20],i,j,k=0,l=0,temp=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[i]+a[j]==a[k]){
            printf("%d %d %d\n",a[i],a[j],a[k]);
            break;
            }
        }
    }
}
}
