#include <stdio.h>

int main() {
int i, j;
 int n = 7;  

for (i = 0; i < n; i++) {
for (j = 0; j < 2 * n; j++) {

if (j == i)
printf("*");
           
 else if (j == 2 * n - i - 1)
printf("*");
else
printf(" ");
}
 printf("\n");
}

return 0;
}
