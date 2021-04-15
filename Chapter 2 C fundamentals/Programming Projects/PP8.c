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
    scanf("%f", &month_pay);

    balance = loan/100*(100+int_rate/12) - month_pay;
    printf("Balance remaining after first payment: $%.2f\n", balance);
    balance = balance/100*(100+(int_rate/12) ) - month_pay;
    printf("Balance remaining after second payment: $%.2f\n", balance);
    balance = balance/100*(100+(int_rate/12) ) - month_pay;
    printf("Balance remaining after third payment: $%0.2f\n" , balance);



    return 0;



}
