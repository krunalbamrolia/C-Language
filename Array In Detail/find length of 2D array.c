#include <stdio.h>

int main() {
    int array[5][6]; 

    int rows = sizeof(array) / sizeof(array[0]);
    int cols = sizeof(array[0]) / sizeof(array[0][0]);
	
	printf(" -: FIND LENGTH OF 2D ARRAY :- \n");
    printf("Number of rows: %d\n", rows); 
    printf("Number of columns: %d\n", cols); 

    return 0;
}

