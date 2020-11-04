#include <stdio.h>

int sum_two_dimensional_array(int n, int m , int a[n][m])
{
    int i , j , sum = 0 ;

    for (i = 0 ; i < n ; i++)
        for (j = 0 ; j < m ; j++)
            sum += a[i][j];

    return 0;
}
int sum_two_dimensional_array(int n, int m , int a[n][m]);