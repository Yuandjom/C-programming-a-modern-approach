// simplified Beaufort scale 
#include <stdio.h>

int main (void)
{
    int speed; 
    printf("Enter a wind speed (in knots) : \n");
    scanf("%d" , &speed);
    printf("Description : ");

    if (speed < 1)
        printf("Calm");
    else if (speed <= 3)
        printf("Light air");
    else if (speed <= 27)
        printf("Breeze");
    else if (speed <= 47)
        printf("Gale");
    else if (speed <= 63)
        printf("Storm");
    else if (speed > 63)
        printf("Hurricane");
    
    
    
    return 0;
}