#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

//insert function with local variables
struct Node* Insert(struct Node* head, int data)
{
    struct Node * temp = (struct Node*)malloc(sizeof(struct Node));
    temp-> data = data;
    temp-> next = NULL;
    if (head == NULL)
        temp = temp;
    struct Node* temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1 -> next;
    }
    temp1->next = temp;
}

void Print(struct Node * p)
{
    if(p == NULL)
    {
        printf("\n");
        return ;
    }
    printf("%d", p->data);
    Print(p->next);
}