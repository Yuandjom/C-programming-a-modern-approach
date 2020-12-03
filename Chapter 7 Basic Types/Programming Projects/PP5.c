#include <stdio.h>
#include <ctype.h> //to use toupper function so that user can type lowercase characters

int main (void)
{
    int sum = 0; // initialise the sum value
    char ch ;
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n'){ // looping sequence to add up all the value of the sum 
        switch (ch = toupper(ch)){ 
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            sum++;
            break;
            case 'D': case 'G':
            sum += 2;
            break;
            case 'B' : case 'C' : case 'M' : case 'P':
            sum += 3;
            break;
            case 'F': case 'H': case 'V' : case 'W' : case 'Y' :
            sum += 4;
            break;
            case 'K' :
            sum += 5;
            break;
            case 'J' : case 'X' : 
            sum += 8;
            break;
            case 'Q' : case 'Z' :
            sum += 10;
            break;
            default:
            return sum ;
            break;
        }
    
    }
    //print value of all the letters
    printf("Scribble value: %d" , sum);
    return 0;

}