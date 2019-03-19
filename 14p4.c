#include<stdio.h>
void main()
{
    int n,m[100],i,j,a,b,s[100],k=0,min;
    scanf("%d %d %d",&n,&a,&b);
    for(i=0;i<n;i++)
     scanf("%d",&m[i]);
   
    for(i=0;i<n;i++)
    {
        for(j=a;j<=b;j++)
        {
            if(m[i]==j)
            {
                s[k]=m[i];
                k++;
            }
        }
    }
    min=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(min>s[i])
         min=s[i];
      
    }
    printf("%d",min);
    
}
