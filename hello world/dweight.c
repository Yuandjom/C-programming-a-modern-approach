#include <stdio.h>

int main(void)
{
    int height, length , width , volume , weight; //can also be use as an initializer eg . int height = 8 , length = 12 , width = 10;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width ;
    weight = (volume+165 )/166;

    printf("Dimension: %dx%dx%dx\n", length ,width , height );
    printf("Volume (cubic inches) %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight );

    return 0 ;

}
