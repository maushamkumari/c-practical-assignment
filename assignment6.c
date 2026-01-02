#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];

    char correctUser[] = "admin";
    char correctPass[] = "1234";

    printf("Enter username: ");
    scanf("%s", user);

    printf("Enter password: ");
    scanf("%s", pass);

    if (strcmp(user, correctUser) == 0 && strcmp(pass, correctPass) == 0) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }

    return 0;
}