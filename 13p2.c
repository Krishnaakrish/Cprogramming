#include <stdio.h>

int main(void) {
	int dd,mm,yyyy;
	scanf("%d-%d-%d",&dd,&mm,&yyyy);
	switch(mm)
	{
		case 01:
		printf("January");
		break;
		
		case 02:
		printf("February");
		break;
		
		case 03:
		printf("March");
		break;
		
		case 04:
		printf("April");
		break;
		
		case 05:
		printf("May");
		break;
		
		case 06:
		printf("June");
		break;
		
		case 07:
		printf("July");
		break;
		
		case 8:
		printf("August");
		break;
		
		case 9:
		printf("September");
		break;
		
		case 10:
		printf("October");
		break;
		
		case 11:
		printf("November");
		break;
		
		case 12:
		printf("December");
		break;
		default:
		printf("Invalid month");
		
	}
	
	return 0;
}
