#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

	printf(" -: FILE WRITE BUT NOT REMOVE :- \n");
   
    file = fopen("krunal.txt", "a");

    printf("Enter data to append to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);

    fclose(file);

    printf("Data appended to the file successfully.\n");
    return 0;
}
