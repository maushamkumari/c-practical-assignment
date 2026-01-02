#include <stdio.h>

int main() {
    int i, j;
    int n = 7; 

for (i = 0; i < n; i++) {
 //M
for (j = 0; j < n; j++) {
if (j == 0 || j == n-1 || (i == j && j <= n/2) || (i + j == n-1 && j >= n/2))
printf("*");
else
printf(" ");
}
 printf("  "); 

// A
for (j = 0; j < n; j++) {
if (i == 0 || i == n/2 || j == 0 || j == n-1)
printf("*");
 else
printf(" ");
}
printf("  ");

 //U
for (j = 0; j < n; j++) {
 if ((j == 0 && i != n-1) || (j == n-1 && i != n-1) || (i == n-1 && j > 0 && j < n-1))
printf("*");
 else
 printf(" ");
}
 printf("  ");

// S
for (j = 0; j < n; j++) {
if (i == 0 || i == n/2 || i == n-1 || (j == 0 && i < n/2) || (j == n-1 && i > n/2))
printf("*");
 else
 printf(" ");
}
 printf("  ");

 //  H
for (j = 0; j < n; j++) {
 if (j == 0 || j == n-1 || i == n/2)
 printf("*");
else
printf(" ");
}
printf("  ");

//  A
for (j = 0; j < n; j++) {
if (i == 0 || i == n/2 || j == 0 || j == n-1)
printf("*");
else
printf(" ");
}
printf("  ");

// M
for (j = 0; j < n; j++) {
if (j == 0 || j == n-1 || (i == j && j <= n/2) || (i + j == n-1 && j >= n/2))
printf("*");
else
printf(" ");
}
printf("\n");
}

    return 0;
}
   