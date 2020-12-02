#include <stdio.h>

int main (void)
{
    int  n  , i , denom;
    float e = 1.0;
    printf("Enter a n integer to calculate the mathematical constant of e : ");
    scanf("%d" , &n);
    for ( i = 1 , denom = 1; i <= n ; i++){
        e = e + 1.0f/(denom *= i) ; // how to multiple 1 * 2 * 3 * 4 repeatedly 
                                    // well , initialise the term eg , denom . then loop it by multiplying by the num constant i.
    }                               // remember it is =* not just * bc , the value of denom will increase accordingly 
                                    // if only * , the denom will take the value of 1 which is the initializer only .
    printf("%0.2f" , e);

    return 0;
}