#include <stdio.h>
int main() {

    int a=25, b;
    //post increment
    b=a++;
    printf("%d\n",b);

    //pre increment
    b=++a;
    printf("%d\n",b);

    return 0;

}