#include <stdio.h>
#define M_PI 3.14159265358979323846
int main (void)
{
    int r;
    float volume;
    printf("Radius of sphere? ");
    scanf("%d", &r);
    volume = 4.0f/3.0f*M_PI*r*r*r;
    printf("Volume of sphere 10m radius %0.1f ", volume);

    return 0;
}