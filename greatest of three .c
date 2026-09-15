#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter 1st number:");
    scanf("%d",&a);
     printf("enter 2nd number:");
    scanf("%d",&b);
     printf("enter 3rd number:");
    scanf("%d",&c);
    if(a>b){ // b is out of race
        if (a>c)
            printf("%d is greatest number",a);
        else
            printf("%d is greatest number",c);
    } 
    else { // b>c 
        if(b>c)
            printf("%d is greatest number",b);
        else // c>b 
            printf("%d is greatest number",c);
    }
    return 0;
}
