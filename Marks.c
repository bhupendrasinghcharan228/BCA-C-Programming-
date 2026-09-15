#include <stdio.h>
int main() {
    int n ;
    printf("enter percentage:");
    scanf("%d",&n);
     // more than 80 -> A grade 
     // more than 60 -> B grade
     // more than 40 -> C grade
     // less than 40 -> D grade
    if(n>80){
        printf("A grade\n");
    }
    else if (n>60) { 
        printf(" B grade\n");
    }
    else if (n>40){
        printf("C grade\n");
    }
    else{
        printf(" D grade");
    }
     return 0;
}
