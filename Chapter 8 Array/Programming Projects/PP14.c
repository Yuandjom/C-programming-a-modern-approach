#include <stdio.h>

int main (void)
{
    int i = 0 , j = 0 ;
    char sentence[100] = {0} , ch , ex_point = '!' , question_mark = '?' , period = '.' , terminating_character ;
    //start w print
    printf("Enter a sentence: ");
    //Use a looop to read the characters one by one and store them in a one-dimensional char array
    //Have it terminate at a period , question mark , exclaimation point
    while ((ch = getchar()) != '\n' ){
        if (ch == ex_point || ch == question_mark || ch == period){
            terminating_character = ch;
            break;
        }
        sentence[i++] = ch; //    for (i = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++) Btr version

    }
    //After the loop ends , i will have the last index of the character .
    //eg.This is c 
    // i wiil be 9 
    printf("Reversal of sentence: ");
    while (i >= 0)
    {
        //scan for first spacing from the back 
        //need one more variable j
        while(sentence[--i] != ' ' && i != 0){ //why is it --i not i--
        
        }//now the value of i is first space from back 
        j = i == 0 ? 0 : i + 1;
        while(sentence[j] != '\0' && sentence[j] != ' '){
            putchar(sentence[j++]);
        }
        printf(" ");
    }

    printf("%c" , terminating_character);
    


    return 0;
}