#include <stdio.h>

int main (void)
{
    float num_stored = 0 , n ;
    for(;;){
        printf("Enter a number: ");
        scanf("%f",&n);
        if (n == 0 || n < 0){
            printf("The largest number entered was %f", num_stored);
            break;
        }
        if (num_stored < n){
            num_stored = n;
        }
    }

}
