#include <stdio.h>

#define MAX_CHARACTERS 80
void encrypt(char *message , int shift);
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

    encrypt(message , num);
    return 0;
}

void encrypt(char *message , int shift)
{
    printf("Encrypted message: ");
    for( ; *message != '\0' ; message++){
        if (*message == ',' || *message == '.' || *message == ' '){
            putchar(*message);
        }
        else if (*message >= 'A' && *message <= 'Z')
        {
            *message = ((*message - 'A') + shift) % 26 + 'A' ;
            putchar(*message);
        }
        else
        {
            *message = ((*message - 'a') + shift) % 26 + 'a' ;
            putchar(*message);
        }
    }
    
}