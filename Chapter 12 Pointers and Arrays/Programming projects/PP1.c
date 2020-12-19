#include <stdio.h>

#define MAX_CHAR 100
int main (void)
{
    int ch , i =0, j=0;
    char msg[100] = {0};
    printf("Enter a message: ");
    while((ch = getchar()) != '\n'){
        msg[i++] = ch;
    }

    printf("Reversal is: ");
    while (i >= 0 )
    {
        putchar(msg[--i]);
    }
    
    return 0;
}

