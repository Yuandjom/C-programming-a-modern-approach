#include <stdio.h>

int main (void)
{
    int time_24h , time_24min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&time_24h,&time_24min);
    printf("Equivalent 12-hour time: " );

    switch (time_24h){
    case 13: printf("1"); break;
    case 14: printf("2"); break;
    case 15: printf("3"); break;
    case 16: printf("4"); break;
    case 17: printf("5"); break;
    case 18: printf("6"); break;
    case 19: printf("7"); break;
    case 20: printf("8"); break;
    case 21: printf("9"); break;
    case 22: printf("10"); break;
    case 23: printf("11"); break;
    case 24: printf("0"); break;
    default : printf("%d",time_24h); break;
    }
    printf(":%d", time_24min);

    if (time_24h >= 12) {
        printf(" PM");
    }else {
        printf(" AM");
    }
    return 0;

}
