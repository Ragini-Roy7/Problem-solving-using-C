// #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node*next;
// };
// struct node*head, *NewNode, *temp;
// void insert_at_begining(){
//     //typecasting
// NewNode = (struct node*) malloc(sizeof(struct node));
// printf("enter data to be inserted\n");
// scanf("%d", &NewNode->data);
// //head pointer is already converted into struct node
// //update the head pointer
//  NewNode->next=head;
//  head=NewNode;
//  //udpate the temp pointer to mark traversal 
//  if(temp->next!=0){
//     temp=temp->next;
//  }
// }
//  void display_linked_list() {
//     temp=head;
//     if(temp==NULL){
//         printf("linked list is empty\n");
//         return;
//     }
//     while(temp!=0){
//         printf("data ", temp->data);
//         temp=temp->next;
//     }
//  }
    

// int main(){
//   insert_at_begining();
//   insert_at_begining();
//   display_linked_list();
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* NewNode;
struct node* temp;

void insert_at_begining(){
    // typecasting
    NewNode = (struct node*) malloc(sizeof(struct node));

    printf("enter data to be inserted\n");
    scanf("%d", &NewNode->data);

    // head pointer is already converted into struct node
    // update the head pointer
    NewNode->next = head;
    head = NewNode;
}

// display function must be outside
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

int main(){
    insert_at_begining();
    insert_at_begining();   // adding twice to see list clearly
    display_linked_list();
    return 0;
}


