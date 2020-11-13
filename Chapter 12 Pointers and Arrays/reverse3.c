// Reverses a series of numbers (pointer version)

#include <stdio.h>

#define N 10 

int main (void)
{
    int a[N] , *p ;

    printf("Enter %d numbers: ", N);
    for(p = a ; p < a + N; p ++) // same as p = &a[0] ; p < &a[N] ; p ++ . It is an idiom
        scanf("%d", p);
    
    printf("In reverse order: ");
    for (p = a + N - 1; p >= a ; p-- )
        printf(" %d", *p); // need to point *p to access the pointer variable 
    printf("\n");
    return 0;
}