// Printing the reverse of digits
#include <stdio.h>

int main (void)
{
    int num , rnum;

    printf("Enter a number: ");
    scanf("%d",&num);    
    printf("Reverse of number : ");
    do{
        rnum = num % 10 ;
        printf("%d" , rnum);
        num = num / 10;

    }while(num != 0);

    return 0;
}