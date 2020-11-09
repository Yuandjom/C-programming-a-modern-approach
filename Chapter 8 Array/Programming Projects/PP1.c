#include <stdio.h>
#include <stdbool.h>



int main (void)
{
    int number;
    int digits , i; 
    bool digit_seen[10] = {false} , 
        repeated_digits[10] ={false};

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 0 ){
        digits = number % 10 ; //this still confuses me , so if 9 % 10 gives a reminder of 9???
        if (digit_seen[digits]){
            repeated_digits[digits] = true; 
  
        }digit_seen[digits] = true;
        number /= 10;
    }
    printf("Repeated digit(s): ");

    for (i = 0 ; i < 10 ; i ++){
        if (repeated_digits[i]){
            printf("%d ", i);}
    }
    return 0;

}
