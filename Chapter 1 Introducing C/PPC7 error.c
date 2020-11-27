#include <stdio.h>

int main (void)
{
    int amt , i = 0, j=0 , k =0 , l=0;
    printf("Enter a dollar amount : ");
    scanf("%d" , &amt);
    
    while (amt >= 20) // this is wrong idk why 
        amt -= 20;
        i = i + 1;
    while (amt >= 10 && amt <= 20)
        amt -= 10;
        j++;
    while (amt >= 5 && amt <= 10)
        amt -= 5;
        k++;
    while (amt > 0 && amt < 5)
        amt -= 1;
        l++;

    printf("$20 bills : %d\n", i);
    printf("$10 bills : %d\n", j);
    printf("$5 bills : %d\n", k);
    printf("$1 bills : %d\n", l);

    return 0;
}