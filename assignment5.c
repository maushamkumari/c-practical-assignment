#include <stdio.h>
int main() {

float balance1,balance2;
printf("enter the first balance:");
scanf("%f",&balance1);
printf("enter the balance2:");
scanf("%f",&balance2);

int equal=balance1==balance2;
printf("balance1 is equal to balance2: %d\n",equal);

int big1=balance1>balance2;
printf("balance1 is greater than balance2: %d\n",big1);

int big2=balance2>balance1;
printf("balance2 is greater than balance1: %d\n",big2);

return 0;

}
