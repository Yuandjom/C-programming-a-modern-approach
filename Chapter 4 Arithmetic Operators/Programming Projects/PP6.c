#include <stdio.h>

int main (void)
{
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12, f_sum , s_sum , total , digit;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12 );
    f_sum = i2 +i4+i6+i8+i10+i12;
    s_sum = i1+i3+i5+i7+i9+i11;
    total = f_sum*3 + s_sum - 1;
    digit = 9 - total%10;

    printf("Check Digits: %d" , digit);
    return 0;
}