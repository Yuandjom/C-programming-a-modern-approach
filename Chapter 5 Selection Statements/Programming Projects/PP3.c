// Calculates a broker's commission 
#include <stdio.h>

int main (void)
{
    int num ; 
    float commission , value , price , rcom;

    printf("Enter the number of shares : ");
    scanf("%d" , &num);
    printf("Enter the price per share: ");
    scanf("%f" , &price);
    value = num * price ;

    if (value < 2500.00f){
        commission = 30.00f + 0.017f*value;
    }
    else if (value < 6250.00f){
        commission = 56.00f + 0.0066f*value ;
    }
    else if (value < 20000.00f){
        commission = 76.00f + 0.0034f*value;
    }
    else if (value < 50000.00f){
        commission = 100.00f + 0.0022f * value;
    }
    else if (value < 500000.00f){
        commission = 155.00f + .0011f *value;
    }
    else 
        commission = 255.00f + .0009f*value;
    
    if (commission < 39.00f){
        commission = 39.00f;
    }

    printf("Commission : $%.2f\n", commission);

    if (num < 2000){
        rcom = 33 + 0.03*num;
    }
    else if (num >= 2000){
        rcom = 33 + 0.02*num;
    }
    printf("Rival's commission : %0.2f", rcom);


    return 0;

}