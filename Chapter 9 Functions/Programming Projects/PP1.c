//using minimum selection sorting
#include <stdio.h>

//prototypes
void swap(int arr[], int i, int j);
void selection_sort(int array[] , int num_in_array);

//main program
int main(void)
{
    int num , i ;
    printf("Enter the number of elements in array: ");
    scanf("%d" , &num);
    int array[num];
    printf("Enter %d numbers to be sorted by selection. " , num);
    for(i = 0 ; i < num ; i++ ){
        scanf("%d" , &array[i]);
    }
    selection_sort(array , num); //remember the array cannot put array[] bc u r passing the address
    printf("In sorted order: ");
    for(i = 0 ; i < num ; i++ ){
        printf("%d " , array[i]);
    }
    printf("\n");
    return 0 ;
}

void selection_sort(int array[] , int num_in_array) //parameter must pass an array , 
{
    for ( int i = 0  ; i < num_in_array - 1 ; i++ ){ // i < num_in_array -1 because it is used to compare with j which is i + 1 
        //Find the minimum value in the array
        int min = i ;
        //need second loop to compare with the current value of i 
        for( int j = i + 1; j < num_in_array ; j++){
            //compare the array 
            if(array[j] < array[min]){
                //array number at j becomes min
                min = j;
            }
        }
        if (min != i)
            {
                swap(array , min , i );
            }
    }
}

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}