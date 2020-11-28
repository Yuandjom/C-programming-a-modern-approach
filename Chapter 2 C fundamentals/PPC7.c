#include <stdio.h>

int main (void)
{
    int amt , i = 0, j=0 , k =0 , l=0;
    printf("Enter a dollar amount : ");
    scanf("%d" , &amt);

    printf("$20 bills : %d\n", amt/20);
    amt = amt - amt/20*20 ;
    printf("$10 bills : %d\n", amt/10);
    amt = amt - amt/10*10 ;    
    printf("$5 bills : %d\n", amt/5);
    amt = amt - amt/5*5 ;    
    printf("$1 bills : %d\n", amt);

    return 0;
}