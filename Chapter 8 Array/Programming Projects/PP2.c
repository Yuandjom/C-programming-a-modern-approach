#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int digit , array_occurred[10] = {0} , i , j;
    long n;
    

    //Enter the integer
    printf("Enter a number: ");
    scanf("%ld", &n);
    //need to check each digit 
    while(n > 0){
        digit = n % 10 ;
        array_occurred[digit]= array_occurred[digit] + 1;
        n /= 10;
    }
    printf("Digits:\t\t");
    for(i = 0 ; i < 10 ; i++){
        printf("%5d" , i);
    }
    printf("\n");
    printf("Occurrences:\t");
    for(j = 0 ; j <10 ; j++){
        printf("%5d" , array_occurred[j]);
    }
    return 0;
}