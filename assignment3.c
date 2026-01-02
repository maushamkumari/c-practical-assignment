#include <stdio.h>
int main() {
//declare and initalise variables
int a=25;
float b=12.45;
char c='M';
double d=123.567487;

//print values
printf("value of int:%d\n",a);
printf("value of float:%.2f\n",b);
printf("value of char:%c\n",c);
printf("value of double:%.6lf\n");

//print sizes using size of operator

printf("size of int:%d byte\n",sizeof (a));
printf("size of float:%d byte\n",sizeof(b));
printf("size of char:%d byte\n",sizeof(c));
printf("size of double:%d byte\n",sizeof(d));

return 0;
}