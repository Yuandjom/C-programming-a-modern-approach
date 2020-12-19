#include <stdio.h>
//prototype
int power (int x , int n); 

int main (void)
{
    int x , n;
    printf("Enter the value for x : ");
    scanf("%d" , &x);
    printf("Enter the value for n : ");
    scanf("%d" , &n);
    printf("Value of function %d " , power(x, n));
    return 0;
}
//recursive call
int power (int x , int n) // *here*
{
    //check if n power is odd or even 
    if (n % 2 == 0 || n == 0)// if n is even
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return power(x , n/2) * power(x , n/2); //this mean it will go up all the way *here* , then go down and check again 
        }
    }
    else //n power is odd
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return x * power(x , n - 1);
        }   
    }
}