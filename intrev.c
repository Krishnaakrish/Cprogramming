#include <stdio.h>

void main()
{
   int n,sum=0,rem;
   
   scanf("%d",&n);
   
   while(n)
   {
       rem=n%10;
       sum=sum*10+rem;
       n/=10;
       
   }
   
   printf("%d",sum);
    
    
    
}
