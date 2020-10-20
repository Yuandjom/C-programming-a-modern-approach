#include <stdio.h>

int main (void)
{
    int item_num , mm , dd ,yyyy;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm,&dd,&yyyy);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$ %0.2f\t%d/%d/%d",item_num,unit_price,mm,dd,yyyy);

}
