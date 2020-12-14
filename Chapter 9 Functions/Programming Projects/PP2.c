#include <stdio.h>

float get_tax(int income);
int main (void)
{
    int income ;
    printf("Enter taxable income : ");
    scanf("%d" , &income);
    printf("Tax due : %0.2f " , get_tax(income));

    return 0;
}

float get_tax(int income)
{
    float tax;
    if (income < 750)
        return tax = 0.01*income;
    else if (income <2250)
        return tax = 7.50f + 0.02 * income ;
    else if (income < 3750)
        return tax = 37.50f + 0.03 * income ;
    else if (income < 5250)
        return tax = 82.50f + 0.04 * income ;
    else if (income < 7000)
        return tax = 142.50f + 0.05* income ;
    else if (income >= 7000)
        return tax =230.00f + 0.06* income ;
}