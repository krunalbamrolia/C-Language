#include <stdio.h>

int main() {
    char email[100];
    char password[100];

    // Hard-coded correct email and password for demonstration purposes
    char correctEmail[] = "krunal@gmail.com";
    char correctPassword[] = "krunalbamroliya";

    printf("=== Login ===\n");
	
	printf("Email : yourname. \n");
	printf("Password : yourfullname. \n");
	printf("**********************\n");
    printf("Email : ");
    gets(email);

    printf("Password : ");
    gets(password);

    // Compare the entered email and password with the correct credentials
    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful. \n Welcome, %s!\n", email);
    } else {
        printf("Login failed. \n Invalid email or password.\n");
    }

    return 0;
}

