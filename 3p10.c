#include<stdio.h>
void main()
{
  char a[30],b[30];
  int l1,l2,n,i,j,c1=0;
  gets(a);
  gets(b);
  scanf("%d",&n);
  l1=strlen(a);
  l2=strlen(b);
  if(l1==l2)
  {
  for(i=0;a[i]!=NULL;i++)
{
    if(a[i]!=b[i])
    {
        c1++;
    }
}
}
if(c1==n)
printf("yes");
else
printf("no");
}
