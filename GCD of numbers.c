#include <stdio.h>

int main() {
    int a, b, temp;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b); 
    int x = a, y = b;
    while(y != 0)                   // while loop and its condition 
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("the GCD of %d and %d : %d\n", a, b, x);                 // here GCD means HCF of two numbers.
    return 0;
}
