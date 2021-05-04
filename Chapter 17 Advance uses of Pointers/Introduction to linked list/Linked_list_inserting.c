//Linked list: Inserting a node at the nth position 
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next; //pointer type
}Node;

struct Node* head; //global variable 
void Insert(int data, int n);
void Print();

int main(void)
{
    head = NULL ; //empty list
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
}

void Insert(int data, int n )
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));//creating a Node for new temp variable 
    temp1 -> data = data;
    temp1 -> next = NULL;
    if(n == 1){
        temp1 -> next = head;
        head = temp1;
        return; // this will exit the function of Insert
    }
    struct Node* temp2 = head; //starting at the address of the head
    for( int i = 0; i < n-2; i ++){
        temp2 = temp2->next;
    }
    temp1-> next = temp2-> next;
    temp2-> next = temp1;
}

void Print(){
    struct Node* temp = head;
    while( temp != NULL){
        printf("%d ", temp->data);
        temp = temp -> next;
    }
    printf("\n");
}