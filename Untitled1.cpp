// getting new nodes
#include<stdio.h>
#include<stdlib.h>

// writing the structure of linked lists
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
//Pushing the value into linked list:
void push(int n,node *start){

    if(start==NULL){
        start->data=n;
    }
    else{
        node *newNode;
        while(start!=NULL)
        {
            if(start->ptr==NULL){
                start->ptr=newNode;
                newNode->data=n;
                newNode->ptr=NULL;
                printf("HEllo");
                break;

            }
            start=start->ptr;
        }
    }
}
//Printing the list:
void printTheList(node *head){
    while(head!=NULL){
    printf("%d",head->data);
    head=head->ptr;
    }
}

int main()
{   int values;
    int choice;
    node *start;
    start=(node *)malloc(sizeof(node));
    start->ptr=NULL;
    while(1){
        printf("Enter the new no. you waant to add in the linked lists\t");
        scanf("%d",&values);
        push(values,start);
        printf("Enter 1 to exit:\t");
        scanf("%d",&choice);
        if(choice==1)
        break;
    }
    printf("HEllo");
    printTheList(start);
    // declaring the node pointer
}
