#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
scanf("%d",&a);
if(a%2==0)
{
printf("even\n");
}
else if(a%2!=0)
{
printf("odd\n");
}
else
{
  printf("Invalid");
}
getch();
}