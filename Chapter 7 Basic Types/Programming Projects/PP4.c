#include <stdio.h>
// WRONG 
int main (void)
{
    char ch ;
    printf("Enter phone number: ");
    ch = getchar();
    printf("\n");
    while (ch != '\n'){
        if (ch == 'A' || 'B' || 'C'){
            printf(2);
        }
        else if (ch == 'D' || 'E' || 'F'){
            printf(3);
        }
        else if (ch == 'G' || 'H' || 'I'){
            printf(4);
        }
        else if (ch == 'J' || 'K' || 'L'){
            printf(5);
        }
        else if (ch == 'M' || 'N' || 'O'){
            printf(6);
        }                            
        else if (ch == 'P' || 'R' || 'S'){
            printf(7);
        }          
        else if (ch == 'T' || 'U' || 'V'){
            printf(8);
        }      
        else if (ch == 'W' || 'X' || 'Y'){
            printf(9);
        }      
        else {
            printf("%c" , ch);
        }

    }
    return 0;
}