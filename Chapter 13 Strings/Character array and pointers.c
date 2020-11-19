#include <stdio.h>
#include <string.h>
// note that single quote is used to identify the single character, and double quotes are used for string literals.
void print(char * C)
{
    int i = 0 ;
    while(C[i] != '\0') // note that the \0 is not "" but it is ''
    {
        printf("%c", C[i]);
        i++;
    }printf("\n");
}
int main (void)
{
    char C[] = "Hello World";
    print(C);
}
