#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *start=NULL;
void createNodes(int n){
node *t,*p;

int i=0;
for(i=0;i<n;i++){
t=(node *)malloc(sizeof(node));
printf("Enter the no %d",i+1);
scanf("%d",&(t->data));
t->ptr=NULL;
if(start==NULL){
    start=t;
}
else{
    p=start;
   while(p->ptr!=NULL){
//    p->ptr=t;
      p=p->ptr;
   }
   p->ptr=t;
    
}
// p=start;
// while(p->ptr!=NULL){
//     p=p->ptr;
// }
// p->ptr=t;
// t->ptr=NULL;

}
}
void displayNodes(){
    // head=head->ptr;
    // while(head!=NULL){
    //     printf("%d\t",head->data);
    //     head=head->ptr;
    // }
    struct Node* p =start;
    while (p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->ptr;
    }
    
}
int main(){
    int n;
    // head=(node *)malloc(sizeof(node));
    // head->ptr=NULL;
    printf("Enter the no. of nodes:\t");
    scanf("%d",&n);
    createNodes(n);
    displayNodes();
}