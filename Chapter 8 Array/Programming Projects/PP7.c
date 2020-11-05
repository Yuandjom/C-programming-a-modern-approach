#include <stdio.h>

int main(void)
{
    int i , j , total_sum  ;
    int n[5][5] ;

    for (i=0; i<5; i++){
        printf("Enter row %d: ", i+1);
        for(j=0;j<5;j++){
            scanf("%d", &n[i][j]);
        }
    }
    printf("Rows totals: ");
    for (i=0; i<5; i++){
        total_sum = 0 ;
        for(j=0;j<5;j++){
            total_sum += n[i][j];

        }
        printf("%d ", total_sum);
    }
    printf("\nColoum totals: ");
    for (i=0; i<5; i++){
        total_sum = 0;
        for(j=0;j<5;j++){
            total_sum += n[j][i];

        }
        printf("%d ", total_sum);
    }
    printf("\n");
    return 0;

}