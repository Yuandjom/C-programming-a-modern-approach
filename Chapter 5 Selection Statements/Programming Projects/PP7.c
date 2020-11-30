// Write a program to find the largest and smallest of four integers entered by the user. 
// Hint: Four if statement is sufficient 
// answer: compare 1  n  2  , 3  n 4 .
#include <stdio.h>

int main (void)
{
    int a , b, c,d , large1  , large2 , small1 , small2 , smallest , largest ;
    printf("Enter four integers : ");
    scanf("%d %d %d %d" , &a ,&b ,&c ,&d);
    if ( a > b ){
        large1 = a ;
        small1 = b ;
    }
    else {
        large1 = b ;
        small1 = a ;
    }
    if ( c > d){
        large2 = c;
        small2 = d;
    }
    else {
        large2 = d;
        small2 = c;
    }
    if (large1 > large2){
        largest = large1;
    }
    else
    {
        largest = large2;
    }
    if (small1 < small2){
        smallest = small1;
    }
    else
    {
        smallest = small2;
    }
    
    printf("Largest: %d \n" , largest);
    printf("Smallest: %d " , smallest);
    return 0;
}