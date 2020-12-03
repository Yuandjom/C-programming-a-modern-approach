#include <stdio.h>

int main (void)
{
    char ch , initials;
    printf("Enter a first and last name : ");
    //read the first initials of the name 
    scanf("%c" , &initials);
    //since we only want their last name 
    //we read their first name and throw it away
    while( (ch = getchar() != ' '));
    //next read the spacing then throw away
    while((ch= getchar()) == ' ');
    //read the last name 
    //use a do loop if not the first letter from the last name will not be present 
    do
    {
        putchar(ch);
    }while ((ch = getchar()) != '\n');
    printf(", %c" , initials);
    return 0;
}