#include <stdio.h>

int main (void)
{
    int n , i;
    int x = 1 ;
    printf("Enter a positive integer: ");
    scanf("%d" , &n);
    for(i = 1 ; i <= n ; i++){
        x *= i;
    }
    printf("Factorial of %d : %d" , n,x);
    return 0;
}