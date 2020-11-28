#include <stdio.h>

int main (void)
{
    int i , j, k;
    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &i , &j , &k);
    printf("You entered %d.%d.%d" , i, j, k);

    return 0;
}