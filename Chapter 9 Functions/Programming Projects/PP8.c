//Write a program to simulate the game of craps
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

//prototypes
int roll_dice(void);
bool play_game(void);


//in the main function : call play_game repeatedly , keep track of no. wins and loses
int main (void)
{
    srand((unsigned) time(NULL)); //just put this one time in the main funtion 

    char ch;
    int counter_win = 0, counter_lose =0;
    bool result;
    for(;;){
        result = play_game();
        if (result){
            counter_win++;
            printf("You win!\n");
        }
        else
        {
            counter_lose++;
            printf("You lose!\n");
        }
        printf("Play again? ");
        scanf(" %c" , &ch);
        if (ch != 'y' && ch != 'Y')
        {
            break;
        }

    }
    printf("Wins: %d Losess: %d " , counter_win , counter_lose);
    return 0;
}

int roll_dice(void) // can actually use one line
{
    int first_dice, second_dice , sum;
    first_dice = rand() % 6;
    second_dice = rand() % 6;
    sum = first_dice + second_dice ; 
    return sum ;
}
// return true or false if player win or loses , diplays image of results of rolls .
bool play_game(void)
{
    int results_firstrow , point , roll;
    results_firstrow = roll_dice();
    printf("You rolled : %d\n" , results_firstrow);
    if (results_firstrow == 2 || results_firstrow == 3|| results_firstrow == 12){
        return false;
    }
    else if (results_firstrow == 7 || results_firstrow == 11)
    {
        return true;
    }
    printf("Your point is : %d\n" , results_firstrow);
    point = results_firstrow;
    while(true){
        roll = roll_dice();
        printf("You rolled : %d\n" , roll);
        if(roll == point){
            return true; //if you have return no need to break 
        }
        if(roll == 7){
            return false;
            
        }
    }
}