// Printing the reverse of 2 digits
#include <stdio.h>

int main (void)
{
    int two_digit, last_digit , first_digit;

    printf("Enter a two-digit number: ");
    scanf("%d",&two_digit);
    first_digit = two_digit%10 ;
    last_digit = two_digit/10;
    printf("The reversal is: %d%d",first_digit,last_digit);

}
