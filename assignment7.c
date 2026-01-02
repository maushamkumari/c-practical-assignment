#include <stdio.h>

int main() {
    float balance, interest, maintenance, bonusFactor;

    // 1. Input initial balance
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    // 2. Add interest
    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);

    // 3. Deduct annual maintenance charge
    printf("Enter annual maintenance charge: ");
    scanf("%f", &maintenance);
    balance -= maintenance;
    printf("Balance after deducting maintenance charge: %.2f\n", balance);

    // 4. Multiply by bonus factor
    printf("Enter bonus factor : ");
    scanf("%f", &bonusFactor);
    balance *= bonusFactor;
    printf("Balance after applying bonus factor: %.2f\n", balance);

    // 5. Divide equally among two linked accounts
    balance /= 2;
    printf("Balance after dividing into two accounts: %.2f\n", balance);

    return 0;
}
