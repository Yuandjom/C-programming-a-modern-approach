#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 100

int main (void)
{
    // cannot just write a[i]
    int i=0 , a[MAX_CHAR] = {0} ; // need to initialise the array properly first before doing anything else 
    char ch;
    
    printf("Enter message: ");
    while((ch = getchar()) != '\n'){
        //storing each character in an array [] box
        a[i++] = toupper(ch);
    }
    printf("In B1FF-speak: ");
    for (i = 0; i < MAX_CHAR ; i++){
        switch (a[i]){
            case 'A' :
                putchar('4');
                break;
            case 'B' :
                putchar('8');
                break;
            case 'E' :
                putchar('3');
                break;
            case 'I' :
                putchar('1');
                break;
            case 'O' :
                putchar('0');
                break;
            case 'S' :
                putchar('5');
                break;
            default:
                putchar(a[i]);

        }
    }
    return 0;
}