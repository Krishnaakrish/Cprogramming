#include<stdio.h>
void main()
{
    int n,m[100],i,j,a,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&m[i]);
   
    if(n%2==0)
          a=n/2; 
    
    else
      a=(n-1)/2;
    
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(m[i]>m[j])
            {
                t=m[i];
                m[i]=m[j];
                m[j]=t;
            }
        }
    }
    for(i=a;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(m[i]<m[j])
            {
                t=m[i];
                m[i]=m[j];
                m[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
      printf("%d ",m[i]);
    
  }
