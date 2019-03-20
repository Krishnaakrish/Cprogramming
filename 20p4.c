#include <stdio.h>
void main()
{
	char a,b;
	scanf("%c %c",&a,&b);
	if((a=='P')&&(b=='R') || (a=='R')&&(b=='P'))
	printf("P");
	
	else if((a=='P')&&(b=='S') || (a=='S')&&(b=='P'))
		printf("S");
	
	else if((a=='R')&&(b=='S') || (a=='S')&&(b=='R'))
		printf("R");
	
	else if(a==b)
		printf("D");

}
