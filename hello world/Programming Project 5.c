#include <stdio.h>

int main(void)
{
    int x  , total ;
    total = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (2 * x * x) + (7 * x) - 6 ;

    printf("Enter value of x : ");
    scanf("%i" , x );
    printf("The value of total is: %i\n", total);


    return 0 ;




}
