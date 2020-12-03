#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char ch ;
    int hours , mins , total_mins ,
    a = 480 , 
    b = 583 , 
    c = 679 ,
    d = 767 ,
    e = 840 , 
    f = 945 , 
    g = 1140 , 
    h = 1305 ;
    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hours , &mins , &ch ); //%c only reads a single character  which is the p first , so where is the m ?
    if (toupper(ch) == 'P' && hours != 12 ){
        hours = hours + 12;
    }
    total_mins = hours * 60 + mins ;

    if (total_mins < a - (a - b)/2){
        printf("Closest departure time is 8:00 a.m. , arriving at 10:16 a.m.");

    }
    else if (total_mins < b - (b - c)/2){
        printf("Closest departure time is 9:43 a.m. , arriving at 11:52 a.m.");

    }
    else if (total_mins < c - (c-d)/2){
        printf("Closest departure time is 11:19 a.m. , arriving at 1:31 p.m.");
        
    }
    else if (total_mins < d - (d - e)/2){
        printf("Closest departure time is 12:47 p.m. , arriving at 3:00 p.m.");

    }
    else if (total_mins < e - (e - f)/2){
        printf("Closest departure time is 2:00 p.m. , arriving at 4:08 p.m.");

    }
    else if(total_mins < f -(f - g)/2){
        printf("Closest departure time is 3:45 p.m. , arriving at 5:55 p.m.");

    }
    else if ( total_mins < g - (g - h)/2){
        printf("Closest departure time is 7:00 p.m. , arriving at 9:20 p.m.");
    }
    else if ( total_mins < h + (h -a)/2){
        printf("Closest departure time is 9:45 p.m. , arriving at 11:58 p.m.");

    }





    return 0 ;
}