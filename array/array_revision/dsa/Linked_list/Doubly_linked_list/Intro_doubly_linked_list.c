// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node*next;
//     struct node*prev;
// };
// struct node *head;

// void createDoublyLL(){
//     struct node*tail,*head,*NewNode,*prev;
//     // temp=head;
//     //move temp forward
//     NewNode = (struct node*) malloc(sizeof(struct node));

//    printf("enter data:\n");
//    scanf("%d",&NewNode->data);
//    NewNode->prev=0, NewNode->next=0;
//    if(head==0){
//     head=tail=NewNode;
//    }
//    else {
//     tail->next=NewNode;
//     NewNode->prev=tail;
//     tail=NewNode;
//    }
// }
//    void displayDoublyLL(){
//     struct node*NewNode,*temp;
//     while(head!=NULL){
//         temp=head;
//         temp=temp->next;
//         temp=temp->next->prev=temp;
//         temp++;

//     }
//    }

// int main(){
//     createDoublyLL();
//     createDoublyLL();
//     createDoublyLL();
//     createDoublyLL();
//     createDoublyLL();
//     displayDoublyLL();

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
void createDoubyLL()
{
    struct node *NewNode, *tail;
    NewNode = (struct node *)malloc(sizeof(struct node));

    printf("enter data\n");
    scanf("%d", &NewNode->data);

    NewNode->prev = NULL;
    NewNode->next = NULL;

    if (head == NULL)
    {
        head == NewNode;
    }
    else
    {
        tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = NewNode;
        NewNode->prev = tail;
    }
}
    void displayDoublyLL()
    {
        struct node *temp;
        temp = head;
        printf("doubly ll\n");
        temp = temp->next;
    }


int main()
{
    createDoubyLL();
    // displayDoublyLL();
    createDoubyLL();
    // displayDoublyLL();
    createDoubyLL();
    // displayDoublyLL();
    createDoubyLL();
    displayDoublyLL();
}