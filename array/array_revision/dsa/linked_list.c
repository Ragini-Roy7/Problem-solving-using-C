#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// creating linked list
void linked_list() {
    int n;
    struct Node *nnode,*temp = NULL;
    // struct Node *prev;

    printf("Enter the no of nodes:\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        nnode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data:\n");
        scanf("%d", &nnode->data);

        nnode->next = NULL;

        if(head == NULL) {
            head = temp = nnode;
        } else {
            temp->next = nnode;
            temp = nnode;
        }
    }
}

// display linked list
void display_linked_list() {
    struct Node *temp = head;

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void reverse_linked_list() {
    struct Node *prev = NULL;
    //connecting head ptr to a new var named current ptr
    struct Node *current = head;
    struct Node *next = NULL;

    while(current != NULL) {
        next = current->next;  
        current->next = prev;  
        prev = current;         
        current = next;     
        
    }
   //this won`t print last node 
    head = prev;  
}
int main() {
    linked_list();
    display_linked_list();
    reverse_linked_list();
    

    return 0;
}
