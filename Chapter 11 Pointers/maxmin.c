// Find the largest and smallest elements in an array

#include <stdio.h>

#define N 10 
void max_min(int a[] , int n , int *max , int *min);
// main program
int main (void)
{
    int b[N], i , big , small ;

    printf("Enter %d numbers: ", N );
    for(i = 0 ; i < N ; i ++){
        scanf("%d", &b[i]);
    }
    max_min(b , N , &big , &small); // bc of & infront of big and small , they are not values of big and small. The arguments are pointers to big and small 
    printf("Largest : %d\n", big); //printing the value of big 
    printf("Smallest: %d\n", small);

    return 0;
}
// to find max and  min function 
void max_min(int a[], int n , int *max , int *min)
{
    int i;

    *max = *min = a[0]; // this means copy the value min points to eg.i , to the value that max points to eg.j

    for(i = 1 ; i < N ; i ++){
        if (a[i]> *max){ 
            *max = a[i]; // *max is an alias for big 
        }else if (a[i] < *min){
            *min = a[i];
        }
    }
}