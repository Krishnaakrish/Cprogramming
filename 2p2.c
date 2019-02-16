#include<stdio.h>
void main()
{
int n,i,a[30],b[30],temp,k,t,j;
scanf("%d%d",&n,&t);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);   
}

for(i=0;i<t;i++)
{
    temp=a[n-1];
    for(j=n-1;j>=0;j--)
    {
        
        a[j]=a[j-1];
    }
    a[0]=temp;

    
}
for(i=0;i<n;i++)
printf("%d ",a[i]);

}
