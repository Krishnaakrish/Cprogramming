#include<stdio.h>
void main()
{
    int a[30],b,i,n,j,c,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]!=0)
{        
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            c++;
            a[j]=0;
        }
    }
    if(c==0){
    temp=c;
    b=a[i];
        
    }
    
}
}
    if(temp==0)
    printf("%d",b);
}
