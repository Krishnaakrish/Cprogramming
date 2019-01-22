#include <stdio.h>
main()
{   
int a[20],i,k,sum = 0,n;    
scanf("%d",&n);    
scanf("%d",&k);
for(i=0;i<n;i++)    
scanf("%d",&a[i]);
for(i=0; i<k;i++)
    
{
        
sum=sum+a[i];
    
}
  
printf("%d",sum);

}
