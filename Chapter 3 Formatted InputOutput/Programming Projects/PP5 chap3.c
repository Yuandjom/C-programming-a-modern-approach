#include <stdio.h>

int main (void)
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16,row1_sum,row2_sum,row3_sum,row4_sum,column1_sum,column2_sum,column3_sum,column4_sum,diagonal1_sum,diagonal2_sum;
    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d",num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16);

    row1_sum = num1 + num2 + num3 + num4 ;
    row2_sum = num5 + num6 + num7 + num8 ;
    row3_sum = num9 + num10 + num11 + num12 ;
    row4_sum = num13 + num14 + num15 + num16 ;
    column1_sum = num1 + num5 + num9 + num13;
    column2_sum = num2 + num6 + num10 + num14;
    column3_sum = num3 + num7 + num11+ num15;
    column4_sum = num4 + num8 + num12 + num16;
    diagonal1_sum = num1 + num6 + num11 + num16;
    diagonal2_sum = num4 + num7 + num10 + num13;

    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d",row1_sum,row2_sum,row3_sum,row4_sum,column1_sum,column2_sum,column3_sum,column4_sum,diagonal1_sum,diagonal2_sum);

    return 0;

}
