#include <stdio.h>

void main()
{
    int n,a[10],i,j,m=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            b=((a[i])|(a[j]));
            if(b>m)
               m=b;
        }
   printf("%d",m);
    
}
