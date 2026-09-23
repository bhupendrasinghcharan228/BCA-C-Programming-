#include <stdio.h>
int main()
{
    
    for(int i=1; i<=100; i++)   // calculation of even numbers upto 100 , with using continue statemenet
        {
            if (i%2!=0)
                
            {           // i is a factor of n 
                continue;
         }
        printf("%d\n",i);
            
    }
    return 0;
    
}
