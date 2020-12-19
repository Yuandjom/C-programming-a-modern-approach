#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 100

int main(void)
{
    int i = 0 , j = 0 ;
    char msg[MAX_CHAR] = {0}  , ch;
    printf("Enter a message: ");
    while((ch = toupper(getchar())) != '\n' && i < MAX_CHAR){
        if (isalpha(ch)) //if char is an alphabet
        {
            msg[i++] = ch;
        }
    }
    i--; //need to minus one cos eg got 17 element , it is located at array[16] as array start from [0]
    for(j = 0 ;j < i; j++ , i--){
        if (msg[j] != msg[i])
        {
            printf("Not a palindrome");
            return 0;
        }
        
    }
    printf("Palindrome");
    return 0;
}