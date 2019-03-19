#include<stdio.h>    
void main(){  
int a[10],n,i,c,b,count=0;    
scanf("%d %d",&c,&b);  
n=c|b;
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
for(i=i-1;i>=0;i--)    
{    

if(a[i]==1)
count++;
} 
printf("%d",count);
}  
