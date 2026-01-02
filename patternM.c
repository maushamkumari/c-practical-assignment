#include <stdio.h>

int main() {
int n = 9; 
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
            
 if (j == 0) {
 printf("*");
}
           
else if (j == n - 1) {
 printf("*");
}
           
else if (i == j && j <= n / 2) {
printf("*");
 }
           
 else if (i + j == n - 1 && j >= n / 2) {
 printf("*");
}
else {
 printf(" ");
}
}
printf("\n");
}
    return 0;
}
