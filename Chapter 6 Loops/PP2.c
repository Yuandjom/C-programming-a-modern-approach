#include <stdio.h>
int main(void)
{
    int m , n , GCD , i ;
    printf("Enter two integers: ");
    scanf("%d %d",&m , &n );
    for(i = 1 ; i <= m || i <= n ; i++ ){
        if ( m%i == 0 && n%i==0 ){
            GCD = i;
        }
    }
    printf("Greatest common divisor : %d",GCD);


    return 0;
}
