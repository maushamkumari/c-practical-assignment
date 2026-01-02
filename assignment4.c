#include <stdio.h>
int main() {

char name[50];
float basic,hra,da,gross,tax,net;

printf("enter employee name:");
scanf("%s",&name);

printf("enter basic salary:");
scanf("%f",&basic);

hra=0.2*basic;
da=0.1*basic;
gross=basic+hra+da;
tax=0.05*gross;
net=gross-tax;

printf("\n---salary details for %s---%n",name);
printf("basic salary:%f\n",basic);
printf("house rent allowance:%f\n",hra);
printf("dearness allowance:%f\n",da);
printf("gross salary:%f\n",gross);
printf("income tax:%f\n",tax);
printf("net salary:%f\n",net);

return 0;

}