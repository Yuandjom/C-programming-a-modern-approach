//Linked List: Inserting a node at beginning 
#include <stdlib.h>
#include <stdio.h>

struct Node{ //two block of code
    int data;
    struct Node* next; //this is a pointer to node
}Node;

struct Node* head; //this is a global variable , can be accessed anywhere

void Insert(int x);
void Print();

int main (void)
{
    head = NULL; // empty list (this means the pointer variable points to nowhere)
    printf("How many numbers?\n");
    int n , i , x;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter the number\n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
}

void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //cast pointer to Node, a variable that is pointer to Node 
    temp->data = x;
    temp->next = NULL;//use only when the list is empty
    if (head != NULL)
    {      
        temp->next = head;
    }
    head = temp;
}

void Print(void)
{
    struct Node* temp = head; //the temp is a temp variable
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp= temp->next;
    }
    printf("\n");
}