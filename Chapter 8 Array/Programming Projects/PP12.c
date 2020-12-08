#include <stdio.h>
#include <ctype.h> 

#define MAX_LETTERS 26

int main (void)
{
    int sum = 0 , array[MAX_LETTERS] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
                        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
                        1, 4, 4, 8, 4, 10}; 
    char ch ;
    printf("Enter a word: ");
    while((ch = getchar()) != '\n' ){
        sum += array[toupper(ch) - 'A']; //this is to find the position of value in alphabet 
        //eg Z - A = 25
    }
    //print value of all the letters
    printf("Scribble value: %d" , sum);
    return 0;

}