#include <stdio.h>

int main (void)
{
    int x , total ;
    printf("Enter the value of x : ");
    scanf("%i", &x);
    total = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (2 * x * x) + (7 * x) - 6;
    printf("Total value of the polynomial is %i\n", total);
    return 0 ;
}
