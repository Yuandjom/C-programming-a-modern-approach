#include <stdio.h>
#include <string.h>

char *duplicate(char *s)
{
    char* dup;
    dup = (char*)malloc(strlen(s) + 1);
    if (dup == NULL){
        printf("Error: malloc failed\n");
        return NULL;
    }
    strcpy(dup, s);
    return dup;
}