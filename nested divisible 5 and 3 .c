#include <stdio.h>

int main() {
    int num;

    // Ask the user for a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // First if statement:check if divisible by 5
    if (num % 5 == 0) {
        
        // Nested if statement:check if also divisible by 3
        if (num % 3 == 0) {
            printf("%d is divisible by both 5 and 3.\n", num);
        } else {
            printf("%d is divisible by 5, but not by 3.\n", num);
        }
        
    } else {
        printf("%d is not divisible by 5\n", num);
    }
    
  return 0;
}
