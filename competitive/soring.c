#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *first=NULL;
void createList(int a){
    node *newNode,*p;
    for(int i=0;i<a;i++){
        newNode=(node *)malloc(sizeof(node));
        newNode->ptr=NULL;
        printf("Enter the %d data:\t",i+1);
        scanf("%d",&newNode->data);
        if(first==NULL){
            first=newNode;
        }
        else{
            p=first;
            while(p->ptr!=NULL){
                p=p->ptr;
            }
            p->ptr=newNode;
        }

    }
}
void display(){
    node *p=first;
    printf("\n");
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->ptr;
    }
}
int main(){
    int size;
    printf("Enter the size of the list:\t");
    scanf("%d",&size);
    createList(size);
    display();

}