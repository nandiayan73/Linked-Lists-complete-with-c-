//Double ended linked-lists
#include<stdio.h>
#include<stdlib.h>
//Creating the template for a node:
struct Node{
    int data;
    struct Node *lptr;
    struct Node *rptr;
};
typedef struct Node node;
node *first;
// Creating the functions for Queue:
// 1. Enqueue
void enqueue(int n,node *start){
    if(start->lptr==NULL && start->data==-99999){
        start->data=n;
        printf("\n%d entered",n);
    }
    else {
        printf("\n%d entered",n);
        node *newNode;
        newNode=(node *)malloc(sizeof(node));
        while(start->rptr!=NULL){
            start=start->rptr;
        }
        start->rptr=newNode;
        newNode->lptr=start;
        newNode->rptr=NULL;
    }
}
// 2.Dequeue
void dequeue(node *start){
    if(start->lptr==NULL && start->data==-99999){
        printf("\nThere is element present in the queue");
    }
    else if(start->rptr==NULL && start->data!=-99999){
        printf("\n%d deleted,the queue is empty",start->data);
        start->data=-99999;
    }
    else{
        node *select;
        printf("\n%d deleted from the queue",first->data);
        select =first;
        first=start->rptr;
        first->lptr=NULL;
        select->rptr=NULL;
        free(select);
    }
}
// 3.display:
void rdisplay(node *start){
    printf("\n");
    if(start->lptr==NULL && start->data==-99999){
        printf("There's no element present in the queue");
    }
    else
    while(start!=NULL)
    {
        printf("%d\t",start->data);
        start=start->rptr;
    }
}
void ldisplay(node *start){
    printf("\n");
    if(start->lptr==NULL && start->data==-99999){
        printf("There's no element present in the queue");
    }
    else{
    while(start->rptr!=NULL)
        start=start->rptr;
    while(start!=NULL){
        printf("%d\t",start->data);
        start=start->lptr;
    }
    }
}
int main(){
    int choice,n,schoice;
    first=(node *)malloc(sizeof(node));
    first->lptr=NULL;
    first->rptr=NULL;
    first->data=-99999;
    while (1){
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit:\nPress any key:\t");
    scanf("%d",&choice);
    switch (choice){
        case 1:
                printf("Enter the element to push:\t");
                scanf("%d",&n);
                enqueue(n,first);
                break;
        case 2: 
                dequeue(first);
                break;
        case 3:
                printf("You want to display the list from left or right side:\n1.left\n2.right\nPress any key:\t");
                scanf("%d",&schoice);
                if(schoice==1)
                ldisplay(first);
                else
                rdisplay(first);
                break;
        case 4:
                printf("Thank You!");
                return 0;
        default: printf("Invalid input!");
                 break;
    }
    }
}