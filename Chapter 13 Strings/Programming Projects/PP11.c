#include <stdio.h>

#define MAX_CHAR 100
double compute_average_word_length(const char *sentence);

int main(void)
{
    int   i =0;
    char ch, sentence[MAX_CHAR];

    printf("Enter a sentence: ");
    //count the length of each words
    while ((ch = getchar())!= '\n' )
    {
        sentence[i++] = ch;
    }
//    check for word_counter
//    printf("%d" , word_counter);
//      check for character counter
//    printf("%d" , character_counter);  
    printf("Average word length: %0.1f", compute_average_word_length(sentence));
    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int j ; 
    float word_counter = 1.0 , character_counter = 0.0;
    double average ;
        while(*sentence){ //need to ++ the sentence to increase the address
        //count the number of total words
            if(*sentence == ' '){
                word_counter++ , sentence++;// this word counter works 
            }
        //counter the total number of characters
            else if(*sentence != ' '){
                character_counter ++ , sentence++;
            }
        }
    average = character_counter/word_counter; // need to change character counter and word counter to float for them to divide . they cannot be integers
    return average;

}