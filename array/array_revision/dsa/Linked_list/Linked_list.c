#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    struct node{
        int data;
        struct node *next;
    }; // basic str of linked list

    // initializing head ptr 
    // marking start of the linked list
    struct node *head, *NewNode, *temp;
    head = NULL;

    // typecasting next ptr to struct node using malloc assigning dynamic memory allocation
    int choice = 1;   // must initialize choice

    while(choice == 1){

        NewNode = (struct node*)malloc(sizeof(struct node));

        // data to be entered within linked list
        printf("enter data to insert\n");
        scanf("%d", &NewNode->data);   // scanf needs address

        // can not access members of struct directly so using ->
        // to access members of struct we used .dot operator in c
        // currently we have only one data so next is not storing any address
        NewNode->next = NULL;

        // mark head as NewNode if no node created 
        if(head == NULL){
            // updating the head with temp to create further links b.w other nodes
            head = temp = NewNode;
        } else {
            // head->next=NewNode;
            temp->next = NewNode;
            temp = NewNode;
        }

        printf("Do you want to continue(0,1)? ");
        scanf("%d", &choice);
    }

    // displaying nodes of linked list using temp
    temp = head; // reseting temp for traversing

    while(temp != NULL){
        printf("%d ", temp->data);
        // moving temp forward for traversal
        temp = temp->next;
    }

    return 0;
}