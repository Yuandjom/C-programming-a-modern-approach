//Favourite interview question : iterative version 
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
//global variable 
//struct Node* head;
struct Node*end;

//prototypes
struct Node* Reverse(struct Node* head);
void Print(struct Node* head);
struct Node* Insert(struct Node* head, int data);

//trying without global variable 
int main(void)
{
    //local variable head
    struct Node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);
    Print(head);
    head = Reverse(head);
    Print(head);
}


//Reverse function (local variable head)
struct Node* Reverse(struct Node* head)
{
    struct Node* next, *prev, *current;// they are all pointer variables
    current = head; //stores the current address of the head node
    prev = NULL; // stores NULL as address 
    while (current != NULL)//traverse the list 
    {
        next = current->next; // next pointer 
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void Print(struct Node* head)
{
    printf("List is ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

//local variable insert funciton  (TBC)
struct Node* Insert(struct Node* head, int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        end = temp;
        return head;
    }
    end->next = temp;
    end = temp;
    return head;
}