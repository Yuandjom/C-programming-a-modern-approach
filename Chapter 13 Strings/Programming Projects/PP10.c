#include <stdio.h>

#define MAX_CHAR 100

void reverse_name(char *name);


int main (void)
{
    char name[MAX_CHAR];
    printf("Enter a first and last name : ");
    fgets(name , sizeof(name) , stdin);
    reverse_name(name) ;

    return 0;

}
void reverse_name(char *name)
{
    char *pointer = name  , initial;

    while (*pointer == ' ')
        pointer++;

    initial = *pointer++;

    while(*pointer && *pointer++ != ' ');//continue until reach rmb this is single quote not double 

    while(*pointer && *pointer != '\n'){
        putchar(*pointer++);
    }
    printf(", %c." , initial);

}