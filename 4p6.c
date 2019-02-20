#include<stdio.h>
void main()
{
  long n,k,temp,rem,c=0;
  scanf("%ld%ld",&n,&k);
  while(n)
  {
      rem=n%10;
      if(rem==k)
      c++;
      n/=10;
  }
  printf("%ld",c);
}
