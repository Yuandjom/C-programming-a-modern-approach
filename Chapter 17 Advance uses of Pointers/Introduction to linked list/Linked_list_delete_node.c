//Linked list: delete a node at nth position 
#include <stdio.h>
#include <stdlib.h>
//create a node 
struct Node{
    int data ;
    struct Node* next;
}Node;
//create the global variable 
struct Node * head;
struct Node * end;
//prototypes
void Insert(int n);
void Print(void);
void Delete(int n);

int main(void)
{
    //create an empty list
    head = NULL;
    //Insert the numbers at the end 
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    int n;
    Print();
    printf("Enter a position\n");
    scanf("%d", &n);
    Delete(n) ;
    Print();
}
/*
void Insert(int n) //inserting from the beginning 
{
    //create a temp node 
    struct Node * temp1 = (struct Node*)malloc(sizeof(struct Node));
    //assign values and address to Node, the temp node is inserted at the end 
    temp1->data = n;
    temp1->next = head; //this to store the address head is 
    head = temp1; //head now stores the address at temp1
} 
*/
//insering at the end 
void Insert(int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n ;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        end = temp;
    }
    end->next = temp;
    end = temp;
}

void Print(void)
{
    //create a temp node(not necessary to create a node for this) so why isit not necessary
    //struct Node * temp = (struct Node*)malloc(sizeof(struct Node));

    //start at head first
    struct Node* temp = head; //temp is a pointer variable 
    //Print the list
    printf("List is: ");
    //traverse the Node
    while(temp!= NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}

//Deletes node at position n
void Delete(int n)
{
    struct Node* temp1 = head;
    //special case 
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for ( i = 0; i < n - 2; i++)
    {
        temp1 = temp1-> next;
    }
    struct Node* temp2 = temp1->next;//this is the nth position 
    temp1->next = temp2->next;// temp1 == to the n+1 position 
    free(temp2); //delete temp2 
}