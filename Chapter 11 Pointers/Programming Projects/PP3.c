#include <stdio.h>

//prototype 
void reduce(int numerator , int denominator , int* reduced_numerator , int* reduced_denominator);


int main (void)
{
    int num , denom , remainder , reduced_nu , reduced_denom;
    printf("Enter a fraction: ");
    scanf("%d/%d" , &num , &denom);
    reduce(num, denom , &reduced_nu , &reduced_denom);
    printf("In the lowest terms: %d/%d " , reduced_nu ,reduced_denom);


    return 0;
}

void reduce(int numerator , int denominator , int* reduced_numerator , int* reduced_denominator)
{
    int remainder , //cannot write n , m , n=.. , m = ... , this is because 
    n = numerator ,
    m = denominator;

    while (n != 0 ){
        remainder = denominator % numerator ; 
        m = n;
        n = remainder;
    }
    *reduced_denominator = denominator/m;
    *reduced_numerator = numerator/m;
}

/*    while (n != 0) { basically this is Euclid's algorithm for GCD
        r = m % n;
        m = n;
        n = r;  
    } (note m contains the GCD)
    eg . if n = 28 and m = 12 , r will be 12.
     */
