#include<stdio.h>
void main()
{
int n,a[1000],b[1000],i,j,k=0,c1=0,temp;
scanf("%d",&n);
for(i=0;i<n;i++)

scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
    if(a[i]!='*')
    {
c1=0;
for(j=i+1;j<n;j++)
{
    if(a[j]!='*')
    {
if(a[i]==a[j])
{
c1++;
a[j]='*';
}
}
}
if(c1>0)
{
b[k]=a[i];
k++;
a[i]='*';
}
}
}
b[k]=NULL;
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
    if(b[i]<b[j])
    {
        temp=b[j];
        b[j]=b[i];
        b[i]=temp;
    }
}
}
for(i=0;a[i]!=NULL;i++)
{
for(j=i+1;a[j]!=NULL;j++)
{
    if(a[i]<a[j])
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
}
}
for(i=0;i<k;i++)
  printf("%d ",b[i]);

for(i=0;i<n;i++)
  if(a[i]!='*')
    
    printf("%d ",a[i]);

}
