#include <stdio.h>

int main() {
    int year;
	
	printf(" -: PRINT LEAP-YEAR :- \n");
	printf("Leap years from 2000 to 3000:\n");

    for (year = 2000; year <= 3000; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
    }

    return 0;
}

