#include <stdio.h>

void main()
{
    int n,s=0,r;
    scanf("%d",&n);
    
    while(n)
    {
        
        r=n%10;
       
        if(r%2!=0)
        {
            
            s=s+r;
        }
        
        n/=10;
        
    }
    
    if(s%2==0)
    printf("E");
    else
    printf("O");
 
}
