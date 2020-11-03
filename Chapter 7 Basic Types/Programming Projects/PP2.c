// Prints a table of squares using a for statement
#include <stdio.h>

int main (void)
{
    int i , n , x = 24;
    char ch;

    printf("This program prints a table of squares.\n ");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)

        if (i*i > x){
            printf("Press Enter to continue...");

            ch = getchar();
            while(ch != '\n'){
            ch = getchar();
            }
            printf("%10d%10d\n", i ,i*i);
        }else if(i*i < x)
        {
            printf("%10d%10d\n", i ,i*i);
        }
        

    return 0;
}
