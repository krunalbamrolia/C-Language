#include <stdio.h>

int main() {
    FILE *file;
    char ch;

	printf(" -: ONLY FILE READ :- \n");
   
    file = fopen("krunal.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}

