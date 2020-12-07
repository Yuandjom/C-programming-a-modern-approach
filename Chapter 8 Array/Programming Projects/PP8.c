#include <stdio.h>

int main(void)
{
    int i , j , total_sum , highest , lowest ;
    int n[5][5] , h[5][5] = {0} , l[5][5] = {0}  ;

    for (i=0; i<5; i++){
        printf("Enter student %d grades: ", i+1);
        for(j=0;j<5;j++){
            scanf("%d", &n[i][j]);
        }
    }
    printf("Totals results : ");
    for (i=0; i<5; i++){
        total_sum = 0 ;
        for(j=0;j<5;j++){
            total_sum += n[i][j];

        }
        printf("%d ", total_sum);
    }
    printf("\nAverage totals for quiz: ");
    for (i=0; i<5; i++){
        total_sum = 0;
        for(j=0;j<5;j++){
             total_sum += n[j][i];
        }
        printf("%d ",  total_sum/5);
    }

    printf("\nHighest for quiz: ");
    
    for (i=0 ; i<5; i++){
        for(j=0 , highest = n[0][0] ;j<5;j++){
            // scanning for the column to find the highest number there
            if (n[j][i] > highest){
                highest = n[j][i];
            }
        }
        printf("%d ", highest);
    }
    printf("\nLowest for quiz: ");
    for (i=0 , lowest = n[0][0]; i<5; i++){ //can dont need to initialise here
        for(j=0 , lowest = n[0][0] ;j<5;j++){
            // scanning for the column to find the highest number there
            if (n[j][i] < lowest){
                lowest = n[j][i];
            }
        }
        printf("%d ", lowest);
    }
    return 0;

}