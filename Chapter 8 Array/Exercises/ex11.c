#include <stdio.h>
#define N 8
int main(void)
{
    char ident[N][N];
    int row, col ;

    for (row = 0 ; row < N ; row++){
        for (col=0 ; col < N; col++){
            if ((row+col)%2 == 0 || (row+col) == 0 ){
                ident[N][N] = 'B';
                printf("%c",ident[N][N]);                
            }else
            {
                ident[N][N] = 'R';
                printf("%c",ident[N][N]);
            }
            
        }printf("\n");
    }

}