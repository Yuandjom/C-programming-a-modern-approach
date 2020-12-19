// Modify the stack example 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100 

//external variables
int contents[STACK_SIZE];
int top = 0 ;

//prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_underflow(void);
void stack_overflow(void);

//Run main program
int main (void)
{
    int ch ;
    printf("Enter parentheses and/or braces: ");
    while((ch = getchar()) != '\n'){
        if(ch == '}' && pop() != '{'){
            printf("Parentheses/braces are not nested properly");
            return 0;
        }
        else if(ch == ')' && pop() != '('){
            printf("Parentheses/braces are not nested properly");
            return 0;
        }
        else if (ch == '(' || ch == '{') 
        {
            push(ch);
        }
        
    }
    if (!is_empty())
    {
        printf("Parentheses/braces are not nested properly");
        return 0;
    }
    
    printf("Parentheses/braces are nested properly");
    return 0;
    
    
}
void make_empty(void)
{
    top = 0;
}

bool is_empty(void) //return True
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i) // add an item onto the stack
{
    if (is_full())
    {
        stack_overflow();
    }else
    {
        contents[top++] = i;
    }
}

int pop(void) //remove it from the same end 
{
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}

void stack_underflow(void)
{
    printf("\nStack Underflow!\n");
    exit(EXIT_FAILURE);
}
void stack_overflow(void)
{
    printf("\nStack Overflow!\n");
    exit(EXIT_FAILURE);
}