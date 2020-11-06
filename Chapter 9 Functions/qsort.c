//Sorts an array of integers using Quicksort algorithm 

#include <stdio.h>

#define N 10 

void quicksort(int a[], int low , int high);
int split(int a[], int low , int high); 

int main (void)
{
    int a[N], i ;
    
    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0 ; i < N ; i++){
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1);
    printf("In sorted order: ");
    for(i = 0 ; i <N ; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}

void quicksort(int a[] , int low , int high)
{
    int middle; //This is a recursive loop to get till one element which is the lowest one
    if (low >= high) return;
    middle = split(a , low , high);
    quicksort(a, low , middle -1);
    quicksort(a, middle + 1, high );
}

int split(int a[],int low ,int high)
{
    int part_element = a[low]; //taking the first element from array
    for (;;) {
        while(low< high && part_element <= a[high])
            high--;
        if(low >= high) 
            break;
        a[low++] = a[high] ; //This means assign a[high] to a[low] then low + 1

        while(low<high && a[low]<= part_element)
            low++;
        if(low>=high) 
            break;
        a[high--] = a[low];
    }
    a[high] = part_element; //putting back element in array
    return high;

}