// Write a project that test whether two words are anagrams 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_CHAR 100
bool are_anagrams(const char* word1, const char* word2);

int main (void)
{
    int i = 0, j = 0 ;
    bool check;
    char word1[MAX_CHAR]  , word2[MAX_CHAR], ch , alphabet ;
    printf("Enter first word: ");
    //initialise the letters array first and assign all of them value of 0 
    //first loop to get the word and num
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch)) //is alphanumeric
        {
            word1[i++] = tolower(ch);
        }
    }
    word1[i] = '\0' ;
    printf("Enter second word: ");
    //second loop to minus all the value of the alphabet
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            word2[j++] = tolower(ch);
        }
    }
    word2[j] = '\0' ;
    //third loop to check the whole array
    check = are_anagrams(word1,word2);

    if (check)
    {
        printf("The words are not anagrams");
    }
    else
    {
        printf("The words are anagrams");
    }
    
    
    return 0;    

}
bool are_anagrams(const char* word1, const char* word2)
{
    int i ;
    for(i = 0 ; i < MAX_CHAR ; i++){
        if(word1[i] != word2[i]){
            return false;
        }
    }
    return true;
}