#include<stdio.h>
void main()
{
   char a[10];
   gets(a);
   if(a[0]=='s'||a[0]=='S')
   printf("yes");
   else
   printf("no");
}
