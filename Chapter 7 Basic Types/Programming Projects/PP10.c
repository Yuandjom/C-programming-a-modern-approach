#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch ;
    int vowel = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n'){
        switch (toupper(ch)){
            case 'A' : case 'E' : case 'I' : case 'O' : case 'U':
            vowel++;
        }
    }
    printf("\nYour sentence contains %d vowels." , vowel);
    return 0;
}