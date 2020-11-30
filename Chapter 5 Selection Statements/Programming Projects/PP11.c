// write a program that asks the user for a two-digit number , then prints the English word for the number :

#include <stdio.h>

int main (void)
{
    int num ;
    printf("Enter a two-digit number : ");
    scanf("%d" , &num);
    printf("You entered the number ");
    switch (num / 10){ // use num/10 to obtain the digit at the tens place
        case 1: 
            switch (num % 10)
            {
            case 0:
                printf("Ten");
                break;
            case 1:
                printf("Eleven");
                break;
            case 2: 
                printf("Twelve");
            case 3:
                printf("Thirtheen");
            case 4:
                printf("Forteen");
            case 5:
                printf("Fifteen");
            case 6:
                printf("Sixteen");
            case 7 :
                printf("Seventeen");
            case 8:
                printf("Eighteen");
            case 9:
                printf("Nineteen");            
            default:
                break;
            }
        case 2:
            printf("Twenty");
            break;
        case 3 :
            printf("Thirty");
            break;
        case 4 :
            printf("Forty");
            break;
        case 5 :
            printf("Fifty");
            break;
        case 6 :
            printf("Sixty");
            break;
        case 7 :
            printf("Seventy");
            break;
        case 8 :
            printf("Eighty");
            break;
        case 9 :
            printf("Ninety");
            break;
        default : 
            printf("The value entered is not within 10-99");
            break;
    }
    switch (num%10) // use n % 10 to find the ones place in two digits
    {
    case 0:
        printf(".");
        break;
    case 1:
        printf("-one.");
        break;
    case 2:
        printf("-two.");
        break;
    case 3: 
        printf("-three");
        break;
    case 4:
        printf("-four.");
        break;
    case 5:
        printf("-five.");
        break;
    case 6:
        printf("-six.");
        break;
    case 7: 
        printf("-seven.");
        break;
    case 8:
        printf("-eight.");
        break;
    case 9:
        printf("-nine.");
        break;

    
    default:
        printf("The value entered is not within 10-99");

        break;
    }
    
    return 0; 

}
