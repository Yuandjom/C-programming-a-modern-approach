// Check numbers for repeated digits
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    bool digit_seen[10] = {false} , i = true ;
    int digit ;
    long n;

    while(i){
    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n <=0){
        i = false;
        break;
    }
    while(n > 0){
        digit = n % 10 ;
        if (digit_seen[digit])
            break;

        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0)
        printf("Repeated digits\n");
    else
        printf("No repeated digits\n");
    }
    return 0;
}