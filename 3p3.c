#include<stdio.h>
void main(){
    char a[100],i,c1=0,c2=0;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            
            c1++;
        }
        c2++;
    }
    if(c1==c2)
    printf("yes");
    else
    printf("no");
    
}
