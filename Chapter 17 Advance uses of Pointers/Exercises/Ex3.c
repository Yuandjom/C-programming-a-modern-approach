#include <stdio.h>

int *create_array(int n, int initial_value) // pointer variable to store address
{
    int *a, *p; //pointer variables
    if (a = (int*)malloc(n * sizeof(int)) == NULL){
        printf("Error: malloc failed\n");
    }
    for(p = a ; p < n + a ; p++){ //start from the address at a, eg a = 100 , end at the addres a + n . eg 100 + 4 = 104
        *p = initial_value;
    }
    return a; //address of the first element in the array
}