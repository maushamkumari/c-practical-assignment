#include <stdio.h>

int main() {
int i, j;
int n = 7;  

for (i = 1; i <= n; i++) {
 for (j = 1; j <= n; j++) {

if ((i == 1 && j > 1 && j < n) ||          
(i == n && j > 1 && j < n) ||         
(i == n/2 + 1 && j > 1 && j < n) ||    
(j == 1 && i > 1 && i < n/2 + 1) ||   
(j == n && i > n/2 + 1 && i < n))  
{  
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
