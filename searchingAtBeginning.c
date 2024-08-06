#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *first=NULL;
void createTheList(int n){
node *newNode,*start;

for(int i=0;i<n;i++){
    start=first;
    newNode=(node *)malloc(sizeof(node));
    printf("Enter the data %d",i+1);
    scanf("%d",&newNode->data);
    newNode->ptr=NULL;
    if(first==NULL){
        first=newNode;
    }
    else{
        while(start->ptr!=NULL)
        {
            start=start->ptr;
        }
        start->ptr=newNode;
    }
}
}
void searchTheList(int n){
    node *q,*p;
    q=first;
    p=first->ptr;
    while(p->data!=n){
        p=p->ptr;
        q=q->ptr;
        if(p==NULL)
            break;
    }
    if(p!=NULL){
    q->ptr=(q->ptr)->ptr;
    p->ptr=first;
    first=p;
    }
    else if(first->data!=n)
    printf("The given value(%d) is not present",n);
}
void displayTheList(){
    printf("\n");
    node *p;
    p=first;
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->ptr;
    }
}
int main(){
first=(node *)malloc(sizeof(node));
first=NULL;
int size,choice;
printf("Please enter the size of the linked list:\t");
scanf("%d",&size);
createTheList(size);
displayTheList();
while(1){
    printf("Enter the no you want to search:\t");
    scanf("%d",&choice);
    searchTheList(choice);
    displayTheList();
    
}
}