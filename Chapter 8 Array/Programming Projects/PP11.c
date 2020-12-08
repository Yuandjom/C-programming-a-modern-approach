#include <stdio.h>
// WRONG 
int main (void)
{
    int i;
    char ch[15] ;
    printf("Enter phone number: ");
    for (i = 0 ; i < 15 ; i++){
        scanf("%c" , &ch[i]);
    }
    printf("\n");
    printf("The numeric form: ");
    for (i = 0 ; i < 15 ; i++){
        switch (ch[i]){
            case 'A' : case 'B' : case 'C':
            printf("2");
            break;
            case 'W' : case 'X' : case 'Y':
            printf("9");
            break;
            case 'D' : case 'E' : case 'F':
            printf("3");
            break;
            case 'G' : case 'H' : case 'I':
            printf("4");
            break;
            case 'J' : case 'K' : case 'L':
            printf("5");
            break;
            case 'M' : case 'N' : case 'O':
            printf("6");
            break;
            case 'P' : case 'R' : case 'S':
            printf("7");
            break;
            case 'V' : case 'T' : case 'U':
            printf("8");
            break;
            default :
            printf("%c" , ch[i]);
            break ;
        }

    }
    return 0;
}