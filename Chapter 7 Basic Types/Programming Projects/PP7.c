//modify so that user can enter * or + or - or / 
#include <stdio.h>

int main (void)
{
    int num1 , denom1 , num2 , denom2 , result_num, result_denom , temp ;
    char operator ;
    printf("Enter two fractions and indicate what operator u want : ");
    //Get the char of the operator that is being used
    scanf("%d/%d %c %d/%d", &num1,&denom1,&operator ,&num2,&denom2);
    switch (operator){
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d ", result_num,result_denom);
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d ", result_num,result_denom);
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d ", result_num,result_denom);
            break; 
        case '/':
            temp = num2;
            num2 = denom2;
            denom2 = temp;
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d ", result_num,result_denom);
            break;                       
    }

    return 0;


}