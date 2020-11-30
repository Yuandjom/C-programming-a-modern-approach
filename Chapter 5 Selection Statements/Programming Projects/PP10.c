#include <stdio.h>

int main (void)
{
    int tens , ones ;
    printf("Enter numerical grade : ");
    scanf("%1d%1d" , &tens , &ones);

    printf("Letter grade : ");
    switch (tens) {
        case 0: case 1 : case 2 : case 3 : case 4 : case 5: 
        printf("F");
        break;
        case 6:
        printf("D");
        break;
        case 7:
        printf("C");
        break;
        case 8:
        printf("B");
        break;
        case 9:
        printf("A");
        break;
    }
    return 0;
}