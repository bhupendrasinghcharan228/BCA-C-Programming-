#include <stdio.h>
int main() {
     int a, b, c;
     printf("enter first number");
     scanf("%d",&a);
     printf("enter second number");
     scanf("%d",&b);
     printf("enter third number");
     scanf("%d",&c);
     if(a>b && a>c){
         printf("%d is the greatest: ",a );
     }
     if(b>a && b>c){
         printf("%d is the greatest: ",b );
     }
     if(c>a && c>b){
         printf("%d is the greatest: ",c );
     }
    
     return 0;
 }
