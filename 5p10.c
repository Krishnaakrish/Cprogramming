#include<stdio.h>
void main()
{
  int n,i,c=0;
  scanf("%d",&n);
  for(i=n-1;i>1;i--)
  {
      if(n%i==0)
      {
          printf("yes");
          c=1;
          break;
      }
  }
  if(c==0)
  printf("no");
}
