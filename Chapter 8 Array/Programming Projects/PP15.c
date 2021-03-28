#include <stdio.h>

#define MAX_CHARACTERS 80
int main (void)
{
    int i , num;
    char ch , message[MAX_CHARACTERS] = {0} ;
    printf("Enter message to be encrypted: ");
    //store each character into an array
    for(i = 0 ; (ch = getchar()) != '\n' && i < MAX_CHARACTERS ; i++){
        message[i] = ch;
    }
    printf("Enter shift amount: (1-25): ");
    scanf("%d" , &num);
    printf("Encrypted message: ");
    for(i = 0 ; message[i] != '\0' ; i++){ //the \0 means the int 0 stored in the array
        if (message[i] == ',' || message[i] == '.' || message[i] == ' '){
            putchar(message[i]);
        }
        else if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = ((message[i] - 'A') + num) % 26 + 'A' ;
            putchar(message[i]);
        }
        else
        {
            message[i] = ((message[i] - 'a') + num) % 26 + 'a' ;
            putchar(message[i]);
        }
        
        
        
    }
    
    return 0;
}