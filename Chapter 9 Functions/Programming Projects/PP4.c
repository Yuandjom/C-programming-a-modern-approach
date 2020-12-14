#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHA 26        /* if you need a constant, #define one (or more) */

void read_word (int *counts);
bool equal_array (int *counts1, int *counts2);

int main (void)
{
    int counts1[ALPHA] = {0},
        counts2[ALPHA] = {0};

    read_word(counts1);
    read_word(counts2);

    if (equal_array(counts1, counts2))
        puts ("The words are anagrams");
    else 
        puts ("The words are not anagrams");
    
    return 0;
  
}
void read_word (int *counts)
{
    int ch;             /* ch must be int to match getchar() and catch EOF */
    
    fputs ("Enter word: ", stdout);
    
    while ((ch = getchar()) != '\n' && ch != EOF)       /* loop over each char in line */
    {
        if (isalpha(ch))
        {
            counts[tolower(ch) - 'a']++;                /* map to zero-based index */
        }
        // counts[ch]++; //Is this statement needed ? why ?
        // no - only alpha chars are counted
    }
}

bool equal_array (int *counts1, int *counts2)
{
    for (int i = 0; i < ALPHA; i++)
        if (counts1[i] != counts2[i])
            return false;

    return true;
}