#include <stdio.h>

#define MAX_CHAR 100

void reverse(char *message);

int main (void)
{
    char msg[MAX_CHAR] , *a = msg , ch;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n' && a < MAX_CHAR + msg ){
        *a++ = ch; // eg. if start using abcde, starting will be 0 end will be 5 as 5 is used to check '\n' 
    } // this means address got one extra space 
    *a = '\0'; // this is to make the array(msg) a string

    reverse(msg);//use msg instead of a bc of a is just a pointer to help out the actually array msg[]
    
    printf("Reversal is: ");

    printf("%s\n", msg);
    return 0;
}

void reverse(char *message)
{
    char *p1 = message , *p2 = message , temp;

 //this stores the address of the first element 

    while (*p2) //this is to remove the string 
    {
        p2++;
    }
    p2--;
    
    while(p1 < p2){
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }

}