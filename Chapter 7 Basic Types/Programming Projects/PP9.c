#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;
    int total_mins, hours , mins; 
    
    printf("Enter a 12-hour time: ");
    
    scanf("%d :%d %c", &hours , &mins , &ch ); //%c only reads a single character  which is the p first , so where is the m ?
    if (toupper(ch) == 'P' && hours != 12 ){
        hours = hours + 12;
        printf("Equivalent 24-hour time: %d:%d " , hours , mins);
    }
    else
    {
        printf("Equivalent 24-hour time: %d:%d " , hours , mins);
    }
        
    return 0;
}