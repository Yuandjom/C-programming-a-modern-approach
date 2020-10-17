// sums a series of numbers (using long variables)

#include <stdio.h>

int main (void)
{
    long n , sum = 0 ;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%1d",&n);
    while(n!=0){
        sum += n ;
        scanf("%1d",&n);
    }
    printf("The sum is %1d\n",sum);
    return 0 ;
}
