//Write a function that computes the value of 3x^5+2x^4-5x^3-x^2+7x-6
#include <stdio.h>
//prototype
int function(int x);

int main (void)
{
    int x ;
    printf("Enter the value of x: ");
    scanf("%d" , &x);
    printf("Value of function : %d ",function(x));
    return 0;


}

int function(int x)
{
    int ans;
    ans = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x +7*x - 6;
    return ans;
}