#include <stdio.h>

int main() {
    int n;
    
    // Ask the user to enter a number.
    printf("Enter an integer: ");
    scanf("%d", &n);
  
    // '&&' means BOTH conditions must be true.
    if (n% 5 == 0 && n % 3 == 0) {
        printf("the number  is divisible by both 5 and 3.\n");
      
    } else {
      
        printf("the number is NOT divisible by both 5 and 3.\n");
      
    }
  
    return 0;
}
