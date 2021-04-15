#include <stdio.h>
#include <stdlib.h> //need to include this to use malloc 

int main(void)
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int*)malloc(n *sizeof(int));
    for (int i =0 ; i < n ; i++){
        A[i] = i+1;
        printf("%d ", A[i]);
    }
}