#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*ptr;
};
struct Node * head;

 void createNode(int a){
    int i;
    struct Node* p;
 

for(i=0;i<a;i++){
       struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data:\n");
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

 void newLinkedList(){
    int c;
    printf("enter the value you want to search and move to first:\n");
    scanf("%d",&c);
    struct Node* p;
    struct Node* q;
    q=NULL;
    p=head;
    if(p->data==c){
        printf("already at first node");
    }
    else{
        p=p->ptr;
        q=head;
    while(p->ptr!=NULL){
        if(p->data==c){
            q->ptr=p->ptr;
            p->ptr=head;
            head=p;
            
        }
        else{
            q=p;
            p=p->ptr;

        }
    }
    }
   
    
}
   void display(){
    struct Node *p;
    p=head;
    while(p!=NULL){
        printf("%d",(p->data));
        p=p->ptr;
    }
   } 



int main(){
    int a;
    printf("enter the no of nodes:\n");
    scanf("%d",&a);
    createNode(a);
    newLinkedList();
    display();
}