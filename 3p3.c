#include<stdio.h>
void main()
{
    int n1,n2,a[30],i,j,k,b,max=0;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++){
    scanf("%d",&a[i]);
    }
    for(j=0;j<n2;j++){
    scanf("%d",&b);
    
    a[i]=b;
    i++;
    max=0;
    for(k=0;k<i;k++){
        if(a[k]>max)
        {
            max=a[k];
        }
    }
    printf("%d ",max);
    }
    
}
