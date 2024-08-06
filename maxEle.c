#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *first=NULL;
void createNode(int limit){
    node *p,*newNode;
    for(int i=0;i<limit;i++){
        p=first;
        newNode=(node *)malloc(sizeof(node));
        printf("Enter the data of the %dst node:\t",i+1);
        scanf("%d",&newNode->data);
        newNode->ptr=NULL;
        if(p==NULL){
            p=newNode;
            first=newNode;
        }
        else{
            while(p->ptr!=NULL){
                p=p->ptr;
            }
            p->ptr=newNode;
        }

    }
}
void display(){
    node *p=first;
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->ptr;
    }
}
int maxElem(){
    int max;
    node *p=first;
    max=p->data;
    p=p->ptr;
    while(p!=NULL){
        if(p->data > max)
            max=p->data;
        p=p->ptr;
    }
    printf("\nThe max element is\t%d",max);
    return max;
}
int main(){
    int limit,choice,max;
    printf("ENter the limit of the Linked Lists:\t");
    scanf("%d",&limit);
    createNode(limit);
    display();
    max=maxElem();
    
}