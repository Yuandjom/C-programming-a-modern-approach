#include <stdio.h>
#include <string.h>

#define MAX_LEN 20
//external variable
char smallest_word[MAX_LEN+1] , largest_word[MAX_LEN+1] , word[MAX_LEN+1];

//prototypes
void get_another_word(void);
void get_first_word(void);
void get_word(void);

int main (void)
{
    get_first_word();
    while (strlen(word) != 4)
    {
        get_another_word();
    }
    printf("Smallest word: %s \nLargest word: %s \n", smallest_word , largest_word);
    return 0;
    

}
void get_first_word(void)
{
    get_word();
    strcpy(smallest_word, word);
    strcpy(largest_word , word);

}
void get_word(void)
{
    printf("Enter word: ");
    gets(word);

}

void get_another_word(void)
{
    get_word();
    if(strcmp(word, smallest_word) < 0){
        strcpy(smallest_word, word);
    }
    else if(strcmp(word , largest_word)> 0){
        strcpy(largest_word, word);
    }
}