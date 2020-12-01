#include <stdio.h>

int main (void)
{
    int num , start , i , day;
    printf("Enter the number of days in months: ");
    scanf("%d" , &num);
    printf("Enter the starting day of the week (1=Sun , 7=Sat): ");
    scanf("%d" , &start);

    for ( i = 1 , day = 1; i < num + start  ; i++)  { // num+start bc i counter has already begin and this is to match the day counter
        if (i < start ){
            printf("   ");
        } // day counter havent start yet
        
        else if (i % 7 == 0){
            printf("%3d" , day++); //start of day counter 
            printf("\n");
        }
        else 
        {
            printf("%3d" , day++); //day counter
        }
        


    }
    return 0;
}