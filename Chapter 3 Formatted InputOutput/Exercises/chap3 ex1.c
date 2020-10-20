#include <stdio.h>

int main(void)
{
    int i , j;
    float x;
    printf("%6d,%4d\n", 86 , 1040);
    printf("%12.5e\n",30.253);
    printf("%-6.2g\n",.0000009979);

    scanf("%d%f%d", &i,&x,&j);
    printf("Value of i:%d x:%f j:%d", i ,x ,j);
}
