#include<stdio.h>
void main(){
    int n,k,i,l,x;
    scanf("%d%d",&n,&k);
        if(n>k)
        x=n;
        else
        x=k;
        for(i=x;i>=0;i--){
            if(n%i==0&&k%i==0)
            {
                printf("%d",i);
                break;
            }
        }
}
