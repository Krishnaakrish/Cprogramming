#include<stdio.h>
void main()
{
    int n,i,j,k,c=0,l1=0,l2=0,x=0;
    char a[30]="kabali",b[30],temp;
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;a[j]!=NULL;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        l1++;
    }
   scanf("%d",&n);
   for(k=0;k<=n;k++)
   {
       gets(b);
       c=0;
       l2=0;
       
       for(i=0;b[i]!=NULL;i++)
    {
        for(j=0;b[j]!=NULL;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        l2++;
    }
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=b[i]){
        c=1;
        break;
        }
    }
    if(l1==l2&&c==0){
    x+=1;
    }
   }
   printf("%d",x);
  }
