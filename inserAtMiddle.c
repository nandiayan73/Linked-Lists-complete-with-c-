#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    int *ptr;
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
void insertAtMiddle(int data,int listData){
node *p=first,*newNode;
newNode=(node *)malloc(sizeof(node));
    while(p->data!=listData){
        p=p->ptr;
        if(p==NULL)
            break;
    }
    if(p!=NULL){
    newNode->data=data;
    newNode->ptr=p->ptr;
    p->ptr=newNode;
    }
    else
        printf("\nThe no. is not present in the list\n");

}
void display(){
    node *start=first;
    while(start!=NULL){
        printf("%d\t",start->data);
        start=start->ptr;
    }
}
int main(){
    int data,listData,length;
    printf("Please enter the length of the linked lists:\t");
    scanf("%d",&length);
    createTheList(length);
    while(1){
        printf("Enter the no. you want to enter:\t");
        scanf("%d",&data);
        printf("After which no. you want to enter:\t");
        scanf("%d",&listData);
        insertAtMiddle(data,listData);
        display();

    }
}