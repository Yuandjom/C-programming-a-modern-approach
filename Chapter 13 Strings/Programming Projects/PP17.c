#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_CHAR 100

bool is_palindrome(const char *message);

int main(void)
{
    char msg[MAX_CHAR]   , ch , *p = msg ;
    printf("Enter a message: ");
    while((ch = toupper(getchar())) != '\n' && p < msg + MAX_CHAR){
        if (isalpha(ch)) //if char is an alphabet
        {
            *p++ = ch;
        }
    }
    *p--; //need to minus one cos eg got 17 element , it is located at array[16] as array start from [0]

    if(!is_palindrome(msg)){
        printf("Palindrome\n");
        return 0;
    };
    printf("Not a palindrome\n");
    return 0;   

}
bool is_palindrome(const char *message)
{
    const char *second_p = message , *p = message;
    for(;second_p < p; *second_p++ , *p--){
        if (*second_p != *p)
        {
            return false;
        }
        
    }
    return true;
}
