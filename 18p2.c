#include <stdio.h>
void main()
{
    int n,a[100],i=0,rem,j,m,temp;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        a[i]=rem;
        i++;
        n/=10;
       
    }
    for(j=0;j<i;j++)
    {
        for(m=j+1;m<i;m++)
        {
            if(a[m]>a[j])
            {
                temp=a[j];
                a[j]=a[m];
                a[m]=temp;
             }
        }
    }
    for(j=0;j<i;j++)
      printf("%d",a[j]);
   
}    
