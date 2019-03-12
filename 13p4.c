#include <stdio.h>

void main()
{
int n,a[100],i,j,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=2;;i++)
{
    c=0;
    for(j=0;j<n;j++)
    {
        
        if(i%a[j]==0)
        {
           c++;
        }
      
    }
    
    if(c==n)
    {
    printf("%d",i);
    break;
    }
}

}
