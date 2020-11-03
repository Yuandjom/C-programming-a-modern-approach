#include <stdio.h>

int main (void)
{
    int digits,num_digits ;
    printf("Enter a number: ");
    scanf("%d",&digits);

    if (digits < 10){
        num_digits = 1;
    } else if (digits < 100 && digits > 10){
        num_digits = 2;
        }
    else if (digits > 100 && digits < 1000){
            num_digits = 3;
    }
    printf("The number %d has %d digits",digits,num_digits);

    return 0;
}
