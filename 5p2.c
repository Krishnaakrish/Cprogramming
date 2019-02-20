#include<stdio.h>
void main()
{
  int n,a[30],i,j,max=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 max++;
             }
         }
     }
     if(max==0)
     printf("yes");
     else
     printf("no");
}
