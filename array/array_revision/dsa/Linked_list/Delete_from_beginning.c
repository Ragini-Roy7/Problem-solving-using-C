// #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// }; //basic str of linked list 
// struct node *NewNode;
// struct node *head=NULL;
// struct node*temp;
// //for traversal of linked list

// void insert_at_begining(int val){
//     // typecasting
//     NewNode = (struct node*) malloc(sizeof(struct node));

//     printf("enter data to be inserted\n");
//     scanf("%d", &NewNode->data);

//     // head pointer is already converted into struct node
//     // update the head pointer
//     NewNode->data = val;
//     NewNode->next=head;
//     head = NewNode;
// }
// void display_linked_list() {
//     temp = head;

//     if (temp == NULL) {
//         printf("Linked list is empty\n");
//         return;
//     }

//     // update the temp pointer to mark traversal
//     while (temp != NULL) {
//         printf("data %d\n", temp->data);
//         temp = temp->next;
//     }
// }
// void delete_from_beginning(){
//     if(head==NULL){
//         printf("no nodes present\n");
//         return;
//     }
//     // NewNode = (struct node*) malloc(sizeof(struct node));
//     temp=head;
//     //temp and head ptr are pointing towards same data 
//     head=head->next;
//     //moved forward from first node to sec node 
//     //so that first node link get broken n deleted
//     free(temp);
// }
// void delete_from_end(){
//     struct node*prevNode;
//     temp=head;
//     while(temp!=NULL){
//         prevNode= temp;
//         temp=temp->next;
//     }
//     prevNode->next=NULL;
//      free(temp);
// }


// int main(){
//     insert_at_begining(6);
//     insert_at_begining(34);
    
//     delete_from_beginning();

//     printf("Linked list after insertions:\n");
//     display_linked_list();

//     delete_from_beginning();

//     delete_from_end();

//     printf("Linked list after deletion:\n");
//     display_linked_list();
//      printf("Linked list after deletion from end:\n");
//      display_linked_list();

    

// }

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}; //basic str of linked list 

struct node *NewNode;
struct node *head=NULL;
struct node *temp;
//for traversal of linked list

void insert_at_begining(int val){
    // typecasting
    NewNode = (struct node*) malloc(sizeof(struct node));

    // you had scanf here, but since we are passing val directly,
    // we don’t need to ask for input again
    // printf("enter data to be inserted\n");
    // scanf("%d", &NewNode->data);

    // head pointer is already converted into struct node
    // update the head pointer
    NewNode->data = val;
    NewNode->next = head;
    head = NewNode;
}

void display_linked_list() {
    temp = head;

    if (temp == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    // update the temp pointer to mark traversal
    while (temp != NULL) {
        printf("data %d\n", temp->data);
        temp = temp->next;
    }
}

void delete_from_beginning(){
    if(head==NULL){
        printf("no nodes present\n");
        return;
    }
    // temp and head ptr are pointing towards same data 
    temp = head;
    head = head->next;
    // moved forward from first node to sec node 
    // so that first node link get broken n deleted
    free(temp);
}

void delete_from_end(){
    if(head==NULL){
        printf("no nodes present\n");
        return;
    }
    // if only one node
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }

    struct node *prevNode;
    temp=head;
    // traverse until last node
    while(temp->next!=NULL){
        prevNode = temp;
        temp = temp->next;
    }
    // temp is last node, prevNode is second last
    prevNode->next=NULL;
    free(temp);
}
void delete_from_specific_position(){
    struct node *nextNode;
    int position,i;
    temp=head;
    printf("enter position to delete\n");
    scanf("%d",&position);
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    nextNode=temp->next;
    temp->next= nextNode->next;
    free(nextNode);

}

int main(){
    insert_at_begining(6);
    insert_at_begining(34);
    
    printf("Linked list after insertions:\n");
    display_linked_list();

    delete_from_beginning();
    printf("Linked list after deletion from beginning:\n");
    display_linked_list();

    delete_from_end();
    printf("Linked list after deletion from end:\n");
    display_linked_list();

    delete_from_specific_position(2);
    printf("Linked list after deletion at first pos\n");
    display_linked_list();
    return 0;
}
