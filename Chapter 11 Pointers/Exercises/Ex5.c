#include <stdio.h>
// this one got error 
void split_time(long total_sec , int *hr , int *min , int *sec);
int main (void)
{
    int i , j , k  , timeo ;
    scanf("%d", &timeo);
    void split_time(timeo , &i , &j , &k);
    printf("%d %d %d" , i , j , k);

    return 0;

}
void split_time(long total_sec, int *hr, int *min, int *sec)
{

    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;
    *min = total_sec / 60;
    total_sec -= *min * 60;
    *sec = total_sec;
}