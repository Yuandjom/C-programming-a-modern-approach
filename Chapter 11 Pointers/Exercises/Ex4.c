#include <stdio.h>

void swap(int *p , int *q);

int main(void)
{
    int i = 10 , j = 1 ;
    swap(&i, &j);

}

void swap(int *p , int *q)
{
    int temp ;// why temp no need * 
    temp = *q ;
    *q = *p ;
    *p = temp;
    printf("Value of i = %d\nValue of j = %d", *p , *q);
}