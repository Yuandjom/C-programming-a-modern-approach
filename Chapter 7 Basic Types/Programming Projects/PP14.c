#include <stdio.h>
#include <math.h>

int main (void)
{
    double num , y=1.0 , xy , ayxy;
    printf("Enter a positive number: ");
    scanf("%lf" , &num );
    //create a loop to keep dividing till the absolete value of difference between old value of y and new is < product of .00001* y
    while ( (fabs( ((y+ (num/y))/2) - y)) > .00001*y ){
        y = (y + (num/y))/2;
    }
    printf("Square root: %lf\n" , y);

    return 0;
}