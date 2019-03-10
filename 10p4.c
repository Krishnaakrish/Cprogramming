#include<stdio.h>
void main()
{
    long int n,t,a[100],k=0,i,f=0,rem;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        a[k]=rem;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
                break;
            }
            else
            f=0;
            }
    }
    if(f==1)
       printf("yes");
    else
    printf("no");
}   
