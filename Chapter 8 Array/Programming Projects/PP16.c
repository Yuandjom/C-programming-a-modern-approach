// Write a project that test whether two words are anagrams 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void)
{
    bool check= {false};
    char letters[26] , ch , alphabet ;
    printf("Enter first word: ");
    //initialise the letters array first and assign all of them value of 0 
    for(alphabet = 'a' ; alphabet <= 'z'; alphabet++){
        letters[alphabet] = 0;
    }
    //first loop to get the word and num
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            letters[tolower(ch)]++;
        }
    }
    printf("Enter second word: ");
    //second loop to minus all the value of the alphabet
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            letters[tolower(ch)]--;
        }
    }
    //third loop to check the whole array
    for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
    {
        if (letters[alphabet] != 0)
        {
            check = true;
        }
        
    }
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