#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *lptr;
    struct Node *rptr;
};
typedef struct Node node;
node *first=NULL;
void insert(int a){
    node *temp=NULL;
    temp=(node *)malloc(sizeof(node));
    temp->data=a;
    temp->lptr=temp->rptr=temp;
    if(first==NULL){
        first=temp;
        printf("%d inserted as the first element of the circular Linked lists\n",a);
    }
    else{
        node *p=first;
        while(p->rptr!=first){
            p=p->rptr;
        }
        p->rptr=temp;
        temp->rptr=first;
        temp->lptr=p;
        first->lptr=temp;
        printf("%d inserted",a);
    }
}
void display(){
    node *p=first;
    printf("\n");
    while(p->rptr!=first){
        printf("%d\t",p->data);
        p=p->rptr;
    }
    printf("%d",p->data);
}
void delete(){
    if(first==NULL)
        printf("There is nothing to delete.\n");
    else{
        node *temp=first;
        first=first->rptr;
        first->lptr=temp->lptr;
        (first->lptr)->rptr=first;
        free(temp);
    }
}
int main(){
    int a,n,i,j;
    node *temp=NULL;
    while(1){
    printf("\nEnter your choice:1.Enter a number\t2.Display\t3.Delete.\t4.Exit\t");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Enter the no. you wwant to enter:\t");
            scanf("%d",&a);
            insert(a);
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;
        case 4:
            printf("Thank You!");
            return 0;
        
    }
    }
}