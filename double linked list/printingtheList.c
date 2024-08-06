#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *lptr;
    struct Node *rptr;
};
typedef struct Node node;
node *first=NULL;
void createList(int n){
    node *newNode,*p,*temp;
    int i=0;
    for(i=0;i<n;i++){
        temp=newNode;
        newNode=(node *)malloc(sizeof(node));
        printf("Enter the %d data",i);
        scanf("%d",&newNode->data);
        newNode->rptr=NULL;
        newNode->lptr=temp;
        if(first==NULL){
            first=newNode;
            newNode->lptr=NULL;
        }
        else
        {
            node *p=first;
            while(p->rptr!=NULL){
                p=p->rptr;
            }
            p->rptr=newNode;

        }
    }
}
void displayLeft(){
    node *p=first;
    printf("\n");
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->rptr;
    }

}
void displayRight(){
     node *p=first;
    while(p->rptr!=NULL){
        // printf("%d",p->data);
        p=p->rptr;
    }
    printf("\n");
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->lptr;
    }
}
int main(){
    int n,choice;
    printf("\nENter the size of the list:\t");
    scanf("%d",&n);
    createList(n);
    while(1){
    printf("\nEnter your choice:\n1.display from left\n2.display from right\nEnter:\t");
    scanf("%d",&choice);
    switch(choice){
        case 1:displayLeft();
               break;
        case 2:displayRight();
               break;
        default:printf("Invalid Input");
                break;

    }
    }
    
}