#include <stdio.h>

int main (void)
{
    float amt,total;
    printf("Enter an amount : ");
    scanf("%f", &amt);
    total = amt/100*105;
    printf("With tax added : %0.2f ", total);

    return 0;


}