#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    bool digit_seen[10] = {false} ;
    int digit;
    long n ;

    printf("Enter a number: ");
    scanf("1%d", &n);
    while(n > 0){
        digit = n % 10 ;
        if (digit_seen[digit])
            break;
        
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n>0){
        printf("Repeated digits\n");

    }
    else{
        printf("No repeated digits\n");
    }
    return 0;
}