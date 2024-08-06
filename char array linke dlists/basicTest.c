#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Node{
    char data[100];
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
    scanf("%s",newNode->data);
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
void insertAtMiddle(int listData){
node *p=first,*newNode;
newNode=(node *)malloc(sizeof(node));
    while(strcmp(p->data,listData)!=0){
        p=p->ptr;
        if(p==NULL)
            break;
    }
    if(p!=NULL){
    printf("Enter the string:\t");
    scanf("%s",newNode->data);
    newNode->ptr=p->ptr;
    p->ptr=newNode;
    }
    else
        printf("\nThe no. is not present in the list\n");

}
void display(){
    node *start=first;
    while(start!=NULL){
        printf("%s\t",start->data);
        start=start->ptr;
    }
}
int main(){
    int length;
    char listData[100];
    printf("Please enter the length of the linked lists:\t");
    scanf("%d",&length);
    createTheList(length);
    while(1){
        printf("After which string you want to enter:\t");
        scanf("%s",listData);
        insertAtMiddle(listData);
        display();

    }
}