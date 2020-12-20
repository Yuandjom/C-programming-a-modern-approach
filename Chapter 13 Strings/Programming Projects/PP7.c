// write a program that asks the user for a two-digit number , then prints the English word for the number :

#include <stdio.h>

int main (void)
{
    int num ;
    char *teens[] = {"Ten" , "Eleven" , "Twelve","Thirtheen","Forteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"} , //multidimenisonal array
    *tens[] = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"},
    *ones[] = {".","-one.","-two.","-three","-four.","-five.","-six.","-seven.","-eight.","-nine."}
    ;

    printf("Enter a two-digit number : ");
    scanf("%d" , &num);
    if (num/10 == 1)
    {
        printf("You entered the number %s " , teens[num%10]);
    }
    else
    {
        printf("You entered the number %s%s " , tens[num/10 - 2], ones[num%10]);
    }

    return 0; 

}
