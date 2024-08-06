#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
void createNodes(int n,node *start){
node *t,*p;
int i=0;
for(i=0;i<n;i++){
t=(node *)malloc(sizeof(node));
printf("Enter the no %d",i+1);
scanf("%d",&t->data);
p=start;
while(p->ptr!=NULL){
    p=p->ptr;
}
p->ptr=t;
t->ptr=NULL;
}
}
void displayNodes(node *head){
    // head=head->ptr;
    while(head!=NULL){
        printf("%d\t",head->data);
        head=head->ptr;
    }
}
int main(){
    int n;
    node *head;
    head=(node *)malloc(sizeof(node));
    head->ptr=NULL;
    printf("Enter the no. of nodes:\t");
    scanf("%d",&n);
    createNodes(n,head);
    displayNodes(head);
}
