#include <stdio.h>

#define MAX_WORD 30
#define MAX_CHAR 20
int main (void)
{
    char sentence[MAX_WORD][MAX_CHAR + 1] ; 
    int i = 0 , j = 0 ;
    char ch , ex_point = '!' , question_mark = '?' , period = '.' , terminating_character ;
    //start w print
    printf("Enter a sentence: ");
    //Use a looop to read the characters one by one and store them in a one-dimensional char array
    //Have it terminate at a period , question mark , exclaimation point
    while ((ch = getchar()) != '\n' ){
        if (ch == ' ')
        {
            sentence[i][j] = '\0';
            i++; //go to next row 
            j = 0; //reset colummn to first index
            continue;
        }
        
        else if (ch == ex_point || ch == question_mark || ch == period){
            terminating_character = ch;
            sentence[i][j] = '\0';
            break;
        }
        else if(j < MAX_CHAR){
            sentence[i][j++] = ch ;
        }
    }
    //After the loop ends , i will have the last index of the character .
    //eg.This is c 
    // i wiil be 9 
    printf("Reversal of sentence: ");
    while (i >= 0)
    {
        printf("%s " , sentence[i--]);
    }

    printf("%c" , terminating_character);
    return 0;
}