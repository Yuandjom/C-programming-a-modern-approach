#include <stdio.h>
#include <ctype.h> //to use toupper function so that user can type lowercase characters

int compute_scrabble_value(const char *word);

#define MAX_CHAR 100
int main (void)
{
    int i=0 , sum ; // initialise the sum value
    char ch , word[MAX_CHAR];
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n'){ // looping sequence to add up all the value of the sum 
        word[i++] = toupper(ch);
    }
    sum = compute_scrabble_value(word);
    //print value of all the letters
    printf("Scribble value: %d" , sum); // cant just put  , compute_scrabble_value(word) instead of using sum 
    return 0;

}

int compute_scrabble_value(const char *word){
        int j , sum = 0  ;
        for(j = 0; j < MAX_CHAR; j++)
            switch (*(word + j)){ 
                case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                sum++;
                break;
                case 'D': case 'G':
                sum += 2;
                break;
                case 'B' : case 'C' : case 'M' : case 'P':
                sum += 3;
                break;
                case 'F': case 'H': case 'V' : case 'W' : case 'Y' :
                sum += 4;
                break;
                case 'K' :
                sum += 5;
                break;
                case 'J' : case 'X' : 
                sum += 8;
                break;
                case 'Q' : case 'Z' :
                sum += 10;
                    break;
                default:
                return sum ;
                break;
            }
}
/*#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void) {

    int sum;
    char word[81];

    printf("Enter a word: ");
    scanf("%s", word); comment: get string msg

    printf("Scrabble value: %d\n", compute_scrabble_value(word));
    return 0;
}

int compute_scrabble_value(const char *word) {

    int sum = 0, values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                             1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};comment: can store in array 
    while (*word)
        sum += values[toupper(*word++) - 'A'];
    return sum;
} */