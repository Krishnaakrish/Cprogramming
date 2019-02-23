#include<stdio.h>
void main()
{
    char a[50],b,c;
    int n,i,j,k,l=0;
    gets(a);
    scanf("%d",&n);
    for(i=0;a[i]!=NULL;i++)
    l++;
    for(i=1;i<=n;i++)
    {
        b=a[l-1];
       for(j=l-2;j>=0;j--)
 	{
	   a[j+1]=a[j];
	}
	    a[0]=b;
        }
    puts(a);
    
}
