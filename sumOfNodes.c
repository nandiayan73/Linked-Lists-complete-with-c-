// sum of the nodes
#include<stdio.h>
#include<stdlib.h>
int sum=0;
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
// node *first;
node *createNodes(int n,node *start){
    node *select;
    int i=0;
    while(i<n){
        node *newNode;
        if(i>0)
        start=select;
        newNode=(node *)malloc(sizeof(node));
        scanf("%d",&newNode->data);
        //linking of the newly created node with the previous nodes.
        while(start->ptr!=NULL)
        start=start->ptr;
        start->ptr=newNode;
        newNode->ptr=NULL;
        if(i==0){
            // start=newNode;
            select=newNode;
            // first=newNode;
        }
    i++;        
    }
    return select;
}
int sumOfNodes(node *start){
    sum=0;
    while(start!=NULL){
        printf("siu");
        sum=sum+start->data;
        start=start->ptr;
    }
    return sum;
}
int main(){
    int n,result;
    node *first;
    first=(node *)malloc(sizeof(node));
    first->ptr=NULL;
    printf("Enter the no. of nodes:\t");
    scanf("%d",&n);
    printf("Enter the nos:\t");
    first=createNodes(n,first);
    result=sumOfNodes(first);
    printf("The sum of all the nodes is:\t%d",result);
    return 0;
}