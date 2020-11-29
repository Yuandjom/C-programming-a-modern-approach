#include <stdio.h>

int main (void)
{
    int three_digits , ones , tens , hundreds , Huns_and_tens;
    printf("Enter a three-digit number: ");
    scanf("%d", &three_digits);
    ones = three_digits % 10 ; // this is to obtain the last digit
    Huns_and_tens = three_digits / 10 ; // this is to find out the tens and hun place
    tens = Huns_and_tens % 10;
    hundreds = Huns_and_tens /10;
    printf("Reversal is %d%d%d" , ones , tens , hundreds); // PP3 also completed
    return 0;  
}