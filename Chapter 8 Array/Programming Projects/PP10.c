#include <stdio.h>

int main (void)
{
    int hours , mins , total_mins  , i , arr_min, arr_hour,dep_min , dep_hour,
    dep[8] = {480 , 583 ,679 ,767 ,840 , 945 , 1140 , 1305} ,
    arr[8] = {616, 712 ,811,900,966,1075,1280,1438};

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours , &mins );
    total_mins = hours * 60 + mins ;

    //create a loop to compare the deperature timing 
    for ( i = 0; i < 7; i++)
    {
        //if this statement hold true coninue the loop
        if (total_mins < dep[i] + (dep[i+1] - dep[i])/2)
        {
            //check whether hours > 12 or <= 12 
            //to get the hour and print the end statement
            dep_hour = dep[i] / 60 > 12 ? dep[i] /60 -12 : dep[i] / 60;
            dep_min = dep[i] % 60 ;
            arr_hour = arr[i] / 60 > 12 ? arr[i]/60 - 12: arr[i] /60;
            arr_min = arr[i] %60;
            printf("Closest departure time is %d:%0.2d %c.m. , arriving at %d:%0.2d %c.m. " , dep_hour , dep_min, dep[i] / 60 > 11 ? 'p' : 'a' ,arr_hour, arr_min, arr[i] / 60 > 11 ? 'p' : 'a');
            break;
        }
    }
    //this statement is important for timning exceeding 11+ pm
    dep_hour = dep[7] / 60 > 12 ? dep[7] / 60 - 12 : dep[7] / 60;
    dep_min = dep[7] % 60;
    arr_hour = arr[7] / 60 > 12 ? arr[7] / 60 - 12 : arr[7] / 60;
    arr_min = arr[7] % 60;
   
    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
           dep_hour, dep_min, dep[7] / 60 > 11 ? 'p' : 'a',
           arr_hour, arr_min, arr[7] / 60 > 11 ? 'p' : 'a');
   return 0;
}
    
    
    
/*    if (total_mins < a - (a - b)/2){
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

    } */




