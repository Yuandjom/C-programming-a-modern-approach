#include <stdio.h>

int main (void)
{
    double num , total; 
    char ch;
    printf("Enter an expression : ");
    scanf("%lf" , &total); //get the first number 
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '+':
            scanf("%lf" , &num); //get the next number first             
            total += num ; // then add on
            break;
        case '*':
            scanf("%lf" , &num);
            total *= num ;
            break;
        case '-':
            scanf("%lf" , &num);
            total -= num;
            break;
        case '/':
            scanf("%lf" , &num);
            total /= num;
            break;
        default:
            printf("Value of expression : %0.1lf" , total);
            break;
        }
    }
    printf("Value of expression : %0.1lf" , total);
    
    
    return 0;
}