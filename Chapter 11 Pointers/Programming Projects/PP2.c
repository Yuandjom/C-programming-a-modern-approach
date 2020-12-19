#include <stdio.h>

//prototype 
void find_closest_flight(int desired_time , int* departune_time , int* arrival_time );
//main program
int main (void)
{
    int hours , mins , total_mins  , deptime , arrtime;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours , &mins );
    total_mins = hours * 60 + mins ;
    find_closest_flight(total_mins , &deptime , &arrtime);
    printf("Closest departure time is %d:%0.2d , arriving at %d:%0.2d. " , deptime/60 ,deptime%60 , arrtime/60, arrtime%60 );
    return 0;

}
void find_closest_flight(int desired_time , int* departune_time , int* arrival_time )
{
    int  a = 480 , i = 616,
    b = 583 , j = 712,
    c = 679 , k = 811,
    d = 767 , l = 900, 
    e = 840 , m = 966, 
    f = 945 , n = 1075 ,
    g = 1140 , o = 1280,
    h = 1305 , p = 1438 ;
    if (desired_time < a - (a - b)/2){
        *departune_time = a; //value of pointer *departure_time
        *arrival_time = i ;
    }
    else if (desired_time < b - (b - c)/2){
        *departune_time = b; //value of pointer *departure_time
        *arrival_time = j ;
    }
    else if (desired_time < c - (c-d)/2){
        *departune_time = c; //value of pointer *departure_time
        *arrival_time = k ;        
    }
    else if (desired_time < d - (d - e)/2){
        *departune_time = d; //value of pointer *departure_time
        *arrival_time = l ;
    }
    else if (desired_time < e - (e - f)/2){
        *departune_time = e; //value of pointer *departure_time
        *arrival_time = m ;
    }
    else if(desired_time < f -(f - g)/2){
        *departune_time = f; //value of pointer *departure_time
        *arrival_time = n ;
    }
    else if ( desired_time < g - (g - h)/2){
        *departune_time = g; //value of pointer *departure_time
        *arrival_time = o ;    }
    else if ( desired_time < h + (h -a)/2){
        *departune_time = h; //value of pointer *departure_time
        *arrival_time = p ;    
    }

}
    