// Deals a random hand of cards 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main (void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false} ;
    int num_cards , rank , suit ;
    const char *rank_code[] = {"Two","Three","four","five","six","seven","eight",
                                "nine","ten","jack","queen","king","ace"
    };
    const char *suit_code[] = {"clubs","diamonds","hearts","spades"};

    srand((unsigned) time(NULL)); // prevent program from dealing with the same cards

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);


    printf("Your hand:");
    while(num_cards > 0){
        suit = rand() % NUM_SUITS ; //rand() generates a random number , by using % can scale it to between 0 - 3 for suits 
        rank = rand() % NUM_RANKS ;// for rank is scaled between 0-12 
        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf("\n%s of %s\n", rank_code[rank],suit_code[suit]);

        }
    }
    printf("\n");

    return 0;

    
}