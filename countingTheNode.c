#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *first;
int createNode(int a[],int n){
    node *newNode,*last;
    first->data=a[0];
    first->ptr=NULL;
    last=first;
    for(int i=1;i<n;i++){
        newNode=(node *)malloc(sizeof(node));
        newNode->data=a[i];
        newNode->ptr=NULL;
        last->ptr=newNode;
        last=newNode;
    }
    last->ptr=NULL;
}
int countTheNodes(node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->ptr;
    }
    return count;
}
int main(){
    int n,i,a[10],count;
    first=(node *)malloc(sizeof(node));
    printf("Enter the size of array\t");
    scanf("%d",&n);
    puts("ENter the value of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    createNode(a,n);
    count=countTheNodes(first);
    printf("The no. of nodes present is %d",count);
    return 0;
}