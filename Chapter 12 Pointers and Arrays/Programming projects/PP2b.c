#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 100

int main(void)
{
    char msg[MAX_CHAR]   , ch , *p = msg , *second_p = msg;
    printf("Enter a message: ");
    while((ch = toupper(getchar())) != '\n' && p < msg + MAX_CHAR){
        if (isalpha(ch)) //if char is an alphabet
        {
            *p++ = ch;
        }
    }
    *p--; //need to minus one cos eg got 17 element , it is located at array[16] as array start from [0]
    for(;second_p < p; *second_p++ , *p--){
        if (*second_p != *p)
        {
            printf("Not a palindrome");
            return 0;
        }
        
    }
    printf("Palindrome");
    return 0;
}