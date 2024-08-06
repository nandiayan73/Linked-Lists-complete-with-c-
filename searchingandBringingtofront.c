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
    newNode->ptr!=NULL;
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
    }
    q=(q->ptr)->ptr;
    p->ptr=first;
    first=p;
}
void displayTheList(){
    node *p;
    p=first;
    while(p!=NULL){
        printf("%d\t",p->data);
    }
}
int main(){
int size,choice;
printf("Please enter the size of the linked list:\t");
scanf("%d",&size);
createTheList(size);
while(1){
    printf("Enter the no you want to search:\t");
    scanf("%d",&choice);
    searchTheList(choice);
    displayTheList();
    
}
}