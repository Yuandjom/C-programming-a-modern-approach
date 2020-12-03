#include <stdio.h>
//uses getchar(), switch and putchar() 
int main(void)
{
    char ch;
    printf("Enter phone number: ");
    //Remember the double bracket surrounding ch= getchar()
    while ((ch = getchar()) != '\n'){
        switch (ch){
            case 'A' : case 'B' : case 'C':
            putchar('2'); // use putchar instead of printf() , idk why printf() causes a lot of errors
            break;
            case 'W' : case 'X' : case 'Y':
            putchar('9');
            break;
            case 'D' : case 'E' : case 'F':
            putchar('3');
            break;
            case 'G' : case 'H' : case 'I':
            putchar('4');
            break;
            case 'J' : case 'K' : case 'L':
            putchar('5');
            break;
            case 'M' : case 'N' : case 'O':
            putchar('6');
            break;
            case 'P' : case 'R' : case 'S':
            putchar('7');
            break;
            case 'V' : case 'T' : case 'U':
            putchar('8');
            break;
            default :
            putchar(ch);
            break ;
        }
    }

    return 0;
}
