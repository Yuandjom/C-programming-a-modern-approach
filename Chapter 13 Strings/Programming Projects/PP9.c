#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 100

int compute_vowel_count(const char *sentence);

int main (void)
{
    char ch  , sentence[MAX_CHAR] , i= 0 ;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n'){
        sentence[i++] = ch;
    }
    printf("\nYour sentence contains %d vowels." , compute_vowel_count(sentence) );
    return 0;
}
int compute_vowel_count(const char *sentence)
{
    int vowel = 0 ;
    while (*sentence)
    {
        switch (toupper(*sentence++)){
            case 'A' : case 'E' : case 'I' : case 'O' : case 'U':
            vowel++;
        }
    }
    

    return vowel;
}
