#include <stdio.h>

int main (void)
{
    int i =0 ;
    char ch , initials , lastname[20] = {0};
    printf("Enter a first and last name : ");
    //read the first initials of the name 
    scanf("%c" , &initials);
    //since we only want their last name 
    //we read their first name and throw it away
    while( (ch = getchar() != ' '));
    //read the last name 
    //use a do loop if not the first letter from the last name will not be present 
    for (i = 0; (ch = getchar()) != '\n'; i++)
        lastname[i] = ch;
    printf("You entered the name : ");
    for(i = 0 ; lastname[i] != '\0' ; i++){
            putchar(lastname[i]); //print out character
        }
    printf(", %c" , initials);
}