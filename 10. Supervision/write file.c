#include <stdio.h>

int main() {
    FILE *file;
    char data[100];
	
	printf(" -: ONLY FILE WRITE :- \n");

    file = fopen("krunal.txt", "w");

    printf("Enter data to write into the file: ");
    fgets(data, sizeof(data), stdin);

    printf(file, "%s", data);

    fclose(file);

    printf("Data written to the file successfully.\n");
    return 0;
}

