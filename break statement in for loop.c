#include <stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
  
    int a;
    for(int i=2; i<=n-1; i++){
        if(n%i==0) {        // i is a factor of n 
            a=1;
            break;          // break statement Terminates the entire loop immediately and Jumps to the code outside the loop.
        }
    }
    if(a==0) printf("the given number is prime\n");
    else printf("the given number is composit\n");
    return 0;
}
