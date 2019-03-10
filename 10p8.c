#include<stdio.h>
#include<string.h>
void main()
{
    char a[100000];
    int i,l,c=0,k;
    gets(a);
    scanf("%d",&k);
    l=strlen(a);
    for(i=0;i<l;i++) 
     if(a[i]>=0 && a[i]<=k)
             c++;
     if(l==c)
        printf("yes");
    else
         printf("no");
    
}
