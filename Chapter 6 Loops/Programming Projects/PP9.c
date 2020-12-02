#include <stdio.h>
int main (void)
{

    int  i  , num;
    float loan , int_rate,month_pay;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &int_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &month_pay);
    printf("Enter the number of payments : ");
    scanf("%d" , &num);

    for (i = 1 ; i < num + 1 ; i++ ){ //looping the value so it will minus itself 
    loan = loan - month_pay + (loan * int_rate / 100.0 / 12.0);
    printf("Balance remaining after payment %d : $%.2f\n", i , loan);
    }

    return 0;



}

