#include<stdio.h>
//making a structure for node:
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
//Creatign a global variale:
node *start;
//Creatign a function for inserign into the queue:
void insert(int value){
    if(start->data==-99999){
        start->data=value;   
    }
    else {
        node *newNode;
        newNode=(node *)malloc(sizeof(node));
        int temp;
        temp=start->data;
        newNode->data=value;
        start->data=newNode->data;
        newNode->data=temp;
        newNode->ptr=start->ptr;
        start->ptr=newNode;
    }

}
//Creating a function for DELETE:
void delete(node *q){
    

}
int main(){
    int ch,value;
    start=(node *)malloc(sizeof(node));
    start->data=-99999;
    start->ptr=NULL;
    while(1){
        printf("ENter your choice:\n1.Insert at begining\n2.Delete from begining\n3.Display\n4.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("ENter the no. \t");
                    scanf("%d",&value);
                    insert(value);
            case 2: delete(start);
        }
    }



}