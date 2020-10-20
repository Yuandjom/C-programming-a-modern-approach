#include <stdio.h>
int main (void)
{

    int  i ;
    float loan , int_rate,month_pay,balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &int_rate);
    printf("Enter monthly payment: ");
    scanf("%f", & month_pay);

    balance = loan - (month_pay/100*(int_rate+100));
    printf("Balance remaining after first payment: %.2f", balance);



    return 0;



}
