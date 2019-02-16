#include<stdio.h>
void main()
{
   int a[10][10],n,i,j,sum1=1,sum2=1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               sum1*=a[i][j];
           }
           if(i+j==n-1)
       {
           sum2*=a[i][j];
       }
       }
   }
   printf("%d",sum1+sum2);
}
