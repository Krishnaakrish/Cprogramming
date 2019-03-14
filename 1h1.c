#include<stdio.h>
void main()
{
int n,a[20],b[20],i,j,k=0,l=0,temp=0,x=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    l=0;
    if(a[i]!=-999){
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
a[j]=-999;
l=1;
x=1;
}
}
if(l==1)
{
    
    b[k]=a[i];
    k++;
    
}
}
}
for(i=0;i<k;i++)
{
    for(j=i+1;j<k;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
if(x==0)
printf("unique");
else
for(i=0;i<k;i++)
printf("%d ",b[i]);
}
