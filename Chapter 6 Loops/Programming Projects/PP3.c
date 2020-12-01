#include <stdio.h>

int main (void)
{
    int num , denom , remainder  , n, m;
    printf("Enter a fraction: ");
    scanf("%d/%d" , &num , &denom);
    n = num;
    m = denom;
    while (n != 0 ){
        remainder = m % n ; 
        m = n;
        n = remainder;
    }
    printf("In the lowest terms: %d/%d " , num/m ,denom/m);


    return 0;
}

/*    while (n != 0) { basically this is Euclid's algorithm for GCD
        r = m % n;
        m = n;
        n = r;  
    } (note m contains the GCD)
    eg . if n = 28 and m = 12 , r will be 12.
     */
