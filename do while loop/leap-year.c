#include <stdio.h>

int main() {
    int year = 2000;
	
	
	printf(" -: PRINT LEAP-YEAR :- \n");
    printf("Leap years from 2000 to 3000:\n");

    do {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
        year++;
    } while (year <= 3000);

    return 0;
}

