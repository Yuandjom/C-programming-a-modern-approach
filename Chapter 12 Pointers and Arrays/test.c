#include <stdio.h>

int main(void)
{
    int array[5] = {1 ,2,3,4 ,5};
    printf("%d  %d  %d" , &array[0] ,array , array[3]);
    return 0;
}