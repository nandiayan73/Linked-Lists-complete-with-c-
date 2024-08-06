#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;

node*head=NULL;

 void createLinkedList(int a){
      int i;
      node*p;
      for(i=0;i<a;i++){
         node *temp;
         temp=(node*)malloc(sizeof(node));
         printf("Enter the data:");
         scanf("%d",&(temp->data));
         temp->ptr=NULL;
         if(head==NULL){
               head=temp;
         }
         else{
            p=head;
            while(p->ptr!=NULL){
                p=p->ptr;
            }
            p->ptr=temp;
         }
      }
 }
 void display(){
    node*p;
    p=head;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->ptr;
    }
 }

int main(){
    int a;
    printf("Enter the number of nodes:");
    scanf("%d",&a);
    createLinkedList(a);
    display();
}