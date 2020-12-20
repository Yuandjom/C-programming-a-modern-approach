#include <stdio.h>

int main (void)
{
    int i = 0 , j = 0 ;
    char sentence[100] = {0} , ch , ex_point = '!' , question_mark = '?' , period = '.' , terminating_character  , *first_pointer = sentence , *second_pointer = sentence ;
    //start w print
    printf("Enter a sentence: ");
    //Use a looop to read the characters one by one and store them in a one-dimensional char array
    //Have it terminate at a period , question mark , exclaimation point
    while ((ch = getchar()) != '\n' ){
        if (ch == ex_point || ch == question_mark || ch == period){
            terminating_character = ch;
            break;
        }
        *first_pointer++ = ch; //    for (i = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++) Btr version

    }
    //After the loop ends , i will have the last index of the character .
    //eg.This is c 
    // i wiil be 9 
    printf("Reversal of sentence: ");
    while (first_pointer >= sentence)
    {
        //scan for first spacing from the back 
        //need one more variable j
        while(*--first_pointer != ' ' && first_pointer != sentence){ //why is it --i not i-- MAJOR NOT SURE
        
        }//now the value of i is first space from back 
        second_pointer = first_pointer == sentence ? sentence : first_pointer + 1;
        while(*second_pointer != '\0' && *second_pointer != ' '){
            putchar(*second_pointer++);
        }
        printf(" ");
    }

    printf("%c" , terminating_character);
    


    return 0;
}