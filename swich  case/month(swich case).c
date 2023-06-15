#include<stdio.h>

void main(){
	
	char month;
	
	printf("-: SWICH CASE (mouth name)  :-\n");
	printf(" -: yo can enter a to l and show mouth name :-\n\n");
	
	printf("You Can Enter letter: ");
	scanf("%c",&month);
	
	switch(month){
		case 'a':
			printf("JANUARY");
			break;
		
		case 'b':
			printf(" FEBRUARY");
			break;
		
		case 'c':
			printf(" MARCH");    
			break;
		
		case 'd':
			printf("APRIL");
			break;
		
		case 'e':
			printf("MAY");
			break;
		
		case 'f':
			printf("JUNE");
			break;
		
		case 'g':
			printf("JULY");
			break;                       
		
		case 'h':
			printf("AUGUST");
			break;
		
		case 'i':
			printf("SEPTEMBER");
			break;
		
		case 'j':
			printf("OCTOBER");
			break;
		
		case 'k':
			printf("NOVEMBER");
			break;
		
		case 'l':
			printf("DECEMBER");
			break;
	
	default:
		printf("!Invalid Input You Can Try Again");
		break;	
	
}
	
	
	
	return 0;
	
}


