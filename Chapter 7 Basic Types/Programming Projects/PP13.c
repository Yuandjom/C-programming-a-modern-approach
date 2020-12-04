#include <stdio.h>

int main(void)
{
    char ch;
    float average, word_counter = 1.0 , character_counter = 0.0;
    printf("Enter a sentence: ");
    //count the length of each words
    while ((ch = getchar())!= '\n' )
    {
        //count the number of total words
        if(ch == ' '){
            word_counter++;// this word counter works 
        }
        //counter the total number of characters
        else if(ch != ' '){
            character_counter ++;
        }
    }
//    check for word_counter
//    printf("%d" , word_counter);
//      check for character counter
//    printf("%d" , character_counter);  
    average = character_counter/word_counter; // need to change character counter and word counter to float for them to divide . they cannot be integers
    printf("Average word length: %0.1f", average);
    return 0;
}