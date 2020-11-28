#include <stdio.h>

int main (void)
{
    int a , b, c, d, e;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&a, &b,&c,&d,&e); // from my understanding the value in scanf is store in a ,b ,c,d,e respectively 
    printf("\nGS1 prefix : %d", a);
    printf("\nGroup identifier : %d" , b);
    printf("\nPublisher code : %d" , c);
    printf("\nItem number : %d" , d);
    printf("\nCheck digits : %d ", e);
    return 0;
}