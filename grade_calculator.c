#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    } 
    else if (marks >= 90) {
        printf("Grade: A+ (Excellent performance!)\n");
    } 
    else if (marks >= 75) {
        printf("Grade: A (Very Good)\n");
    } 
    else if (marks >= 50) {
        printf("Grade: B (Good, keep improving)\n");
    } 
    else if (marks >= 33) {
        printf("Grade: C (Passed)\n");
    } 
    else {
        printf("Grade: F (Failed. Need to work harder!)\n");
    }

    return 0;
}
