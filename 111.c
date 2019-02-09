#include<stdio.h>
void main() 
{
	char s[10];
	int i,n,len;
	scanf("%s%d",&s,&n);
		len=strlen(s);
	for(i=n;i<=len;i++){
	printf("%c",s[i]);
  }
}
