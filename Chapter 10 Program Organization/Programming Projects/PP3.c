// Classifies a poker hand 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define COL 2

//External Variables
bool straight ,flush , four , three;
int pairs; //can be 0 , 1 or 2 
int hand[NUM_CARDS][COL];


//prototypes
void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool duplicate_cards(int rank , int suit , int hand[NUM_CARDS][COL] ,int cards_read);


//main : calls read_cards , analyse_hand , and print_result repeatedly
int main(void)
{
    for(;;){//forms the infinite loop
        read_cards();
        analyze_hand();
        print_result();
    }
}

//read cards: Reads the cards into the external variable num_in_rank and num_in_suit;
//checks for bad cards and duplicate cards.

void read_cards(void)
{
    char ch , rank_ch , suit_ch ;
    int rank , suit;
    bool bad_card;
    int cards_read = 0 ;

    while (cards_read < NUM_CARDS){
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch){
            case '0':       exit(EXIT_SUCCESS);
            case '2':       rank = 0; break;
            case '3':       rank = 1; break;
            case '4':       rank = 2; break;
            case '5':       rank = 3; break;
            case '6':       rank = 4; break;
            case '7':       rank = 5; break;
            case '8':       rank = 6; break;
            case '9':       rank = 7; break;
            case 't':       rank = 8; break;
            case 'j':       rank = 9; break;
            case 'q':       rank = 10; break;
            case 'k':       rank = 11; break;
            case 'a':       rank = 12; break;
            default:        bad_card = true;
        }

        suit_ch= getchar();
        switch (suit_ch){
            case 'c' : case 'C' : suit = 0 ; break;
            case 'd' : case 'D' : suit = 1 ; break;
            case 'h' : case 'H' : suit = 2 ; break;
            case 's' : case 'S' : suit = 3 ; break;   
            default:              bad_card = true;                     
        }

        while ((ch = getchar() != '\n')){
            if (ch != ' ')
                bad_card = true; // when the loop terminates , ch will contain the first nonblank character that getchar encounter
        }
        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (duplicate_cards(rank , suit , hand , cards_read))
            printf("Duplicate card; ignored.\n");
        else{
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}
//duplicate card function to check for multiple cards
bool duplicate_cards(int rank , int suit , int hand[NUM_CARDS][COL] ,int cards_read){
    int i ;
    for(i = 0 ; i < cards_read ; i++){
        if (hand[i][0] == rank && hand[i][1] == suit)
        {
            return true;
        }
    }
    return false;
}
// analyze_ hand : 
// Determines whether the hand contains a straight , a flush , four of a kind , and/or three of a king ;
// determines the number of pairs ; 
// store the results into the external variables staright, flush , four three and paris.

void analyze_hand(void)
{
    int num_consec = 0;
    int rank , suit , i , j , min  , temp_rank , temp_suit , card , matches;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0 ;

    //use selection sort
    for ( i = 0; i < NUM_CARDS; i++)
    {
        min = i ;
        for ( j = i + 1 ; j < NUM_CARDS ; i++)
        {
            if (hand[j][0] < hand[min][0] )
            {
                min = j;
            } 
        }
        temp_rank = hand[i][0];
        temp_suit = hand[i][1];
        hand[i][0] = hand[min][0];
        hand[i][1] = hand[min][1];
        hand[min][0] = temp_rank;
        hand[min][1] = temp_suit;
    }
    
    // check for flush
    for(suit = 1 ; suit < NUM_CARDS; suit++ ){
        if(hand[suit][1] != hand[suit-1][1]){
            flush = false;
            break;
        }
        if(suit == 4){
            flush = true ;
        }
    }
    
    //check for straights
    rank = 1 ;
    for ( ; rank < NUM_RANKS && (hand[rank][0] - hand[rank - 1][0]) == 1 ; rank++){
        num_consec++; //if not consecutive , the num_consec wont reach till 5 
    }
    if (num_consec == NUM_CARDS){
        straight = true;
        return;
    }
    //check for 4 of a kind , 3 of a kind , and pairs
    for (i = 0; i< NUM_CARDS; i++)
    {
        matches = 0 ;
        for(j = i + 1 ; j< NUM_CARDS ; j++){
            if (hand[i][0] == hand[j][0])
            {
                matches++;
            }
            
        }
        
        if (matches ==4) four = true;
        if (matches == 3) three = true;
        if(matches == 2) pairs++;
    }
}


// Print_results
// Prints the classification of the hand , based on the values of the external variable straight , flush , four , three , and pairs

void print_result(void){
    if(straight && flush) printf("Straight flush");
    else if (four)  printf("four of a kind");
    else if (three && pairs == 1) printf("full house");
    else if (flush) printf("Flush");
    else if (straight) printf("Straight");
    else if (three) printf("Three of a kind");
    else if (pairs == 2) printf("two pairs");
    else if (pairs == 1) printf("Pair");
    else printf("high card");

    printf("\n\n");
}