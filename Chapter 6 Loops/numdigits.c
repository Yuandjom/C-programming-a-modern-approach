// Basically do statement is just a whil estatement whose controlling expression is tested after each execution of the loop body 
#include <stdio.h>

int main (void)
{
    int digits = 0 , n ;

    printf("Enter  a nonnegative integer: ");
    scanf("%d",&n);

    do{ // body loop execute first 
        n /= 10;
        digits ++; 
    }while (n>0); // then the controlling statement (last)

    printf("The number has %d digits(s).\n", digits);

    return 0;
}
