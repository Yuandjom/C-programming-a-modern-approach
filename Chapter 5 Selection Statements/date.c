// Prints a date in legal form

#include <stdio.h>

int main (void)
{
    int month,day,year;

    printf("Enter date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month,&day,&year);

    printf("Dated this %d",day);
    switch (day){
        case 1: case 21:case 31:
            printf("st");break;
        case 2: case 22:
            printf("nd");break;
        case 3: case 23:
            printf("rd");break;
        default: printf("th"); break;
    }
    printf(" day of ");

    switch (month){
    case 1 : printf("Jan"); break;
    case 2 : printf("feb"); break;
    case 3 : printf("mar"); break;
    case 4 : printf("apr"); break;
    case 5 : printf("may"); break;
    case 6 : printf("jun"); break;
    case 7 : printf("jul"); break;
    case 8 : printf("aug"); break;
    case 9 : printf("sep"); break;
    case 10 : printf("oct"); break;
    case 11 : printf("nov"); break;
    case 12 : printf("dec"); break;


    }
    printf(", 20%.2d\n",year);
    return 0;

}
