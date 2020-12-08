//Write a program that generates a "random walk" across a 10x10 array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_MOVE 4
#define NUM_ROW 10
#define NUM_COL 10
#define EMPTY_CELL '.'

#define UP 0
#define DOWN 1 
#define LEFT 2 
#define RIGHT 3

int main (void)
{
    int i  , possible_move_count , row , col  , move;
    char letter  , array[NUM_ROW][NUM_COL] ; 
    bool potential_move[NUM_MOVE] ;
    
    // prevent program from dealing with the same thing
    srand((unsigned) time(NULL)); 

    //fill the whole array with EMPTY CELLS
    for (row = 0 ; row < NUM_ROW ; row++){
        for(col=0 ; col < NUM_COL; col++){
            array[row][col] = EMPTY_CELL;
        }
        printf("\n");
    }
    // Using alphabets to fill into the empty cells
    row = 0 ;
    col = 0;
    for (letter = 'A' ; letter <= 'Z' ; letter++ ){
        
        array[row][col] = letter ;

        //reset the potential_move array each time when repeating the loop
        for(i = 0 ; i < NUM_MOVE ; i++){
            potential_move[i] = false;
        }
        possible_move_count = 0 ;
        
        //Find all possible move from current cell
        //Is it possible to move up? 
        if(row-1 >= 0 && array[row-1][col] == EMPTY_CELL){
            potential_move[UP] = true;
            possible_move_count++;
        }
        if(row+1 < 10 && array[row+1][col] == EMPTY_CELL){
            potential_move[DOWN] = true;
            possible_move_count++;
        }
        if(col-1 >= 0 && array[row][col-1] == EMPTY_CELL){
            potential_move[LEFT] = true;
            possible_move_count++;
        }
        if(col+1 < 10 && array[row][col+1] == EMPTY_CELL){
            potential_move[RIGHT] = true;
            possible_move_count++;
        }
        //terminate the loop if no possible movemenet available 
        if(possible_move_count == 0){
            break;
        }
        while(true){
        //generate random number to determine the movement 
            move = rand() % NUM_MOVE; 

            if (potential_move[move] == true){
                switch (move)
                {
                case UP:
                    row--;
                    break;
                case DOWN:
                    row++;
                    break;
                case LEFT:
                    col--;
                    break;
                case RIGHT:
                    col++;
                    break;
                
                }
                //break out of the while(true) loop if one holds true
                break;
            }else
            {
                //if cannot find , loop again in the while(true)
                continue;
            }//after this then the loop will start from the top 
        }
    }
    //To print the whole array with the alphabets:
    for (row = 0 ; row < NUM_ROW ; row++){
        for(col=0 ; col < NUM_COL; col++){
            printf("%2c" , array[row][col] );
        }
        printf("\n");
    }
    return 0;
}