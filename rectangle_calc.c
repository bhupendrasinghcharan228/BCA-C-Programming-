#include <stdio.h>
int main(){
     int l , b ; 
    printf(" enter lenght: "); 
    scanf("%d", &l);
     printf(" enter breadth: "); 
    scanf("%d", &b);
    int a = l*b; 
    int p = 2* ( l+b); 
    if (a>p){
        printf("area is greater than  perimeter "); 
    } 
  
    else{
        printf(" perimeter is greater than area "); 
    }
    
    if (a==p){
         printf("area is equal to perimeter"); 
    }
     return 0; 
}
