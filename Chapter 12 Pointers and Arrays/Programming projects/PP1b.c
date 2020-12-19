#include <stdio.h>

#define MAX_CHAR 100
int main (void)
{
    int ch , i = 0, j = 0;
    char msg[MAX_CHAR] = {0} , *p = msg; //pointer variable p stores address of first element of msg[100] which is msg[0]

    printf("Enter a message: ");
    while((ch = getchar()) != '\n' && p < msg + MAX_CHAR){ //second statement means address of pointer p is less than msg + MAX_CHAR
        *p++= ch;
    }

    printf("Reversal is: ");
    while (p >= msg )
    {
        putchar(*p--);
    }
    
    return 0;
}

