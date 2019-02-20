#include<stdio.h>
void main()
{
  char a[30];
  int i,j;
  scanf("%s",a);
  for(i=0;a[i]!=NULL;i+=3)
  printf("%c",a[i]);
}
