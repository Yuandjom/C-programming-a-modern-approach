#include <stdio.h>

int main (void)
{
    int n = 1 , i ,even_sq;

    printf("Enter a number n to print all even number between 1 and n: ");
    scanf("%d",&n);
    i = 1;
    while (i <= n){
        even_sq = i*i ;
        if (even_sq % 2 == 0 && even_sq <= n) {
            printf("%d\n", even_sq);
        }i++;
    }


}
