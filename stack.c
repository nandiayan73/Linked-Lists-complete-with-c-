#include<stdio.h>
#include<stdlib.h>
//Creating a Structure of a node
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
//Push function to push into the stack:
void push(int value,node *top){
    if(top->data==-99999){
        top->data=value;
    }
    else{
        node *newNode;
        newNode=(node *)malloc(sizeof(node));
        // top->ptr=newNode;
        // newNode->data=value;
        // newNode->ptr=NULL;
        while(top!=NULL){
            if(top->ptr==NULL){
                top->ptr=newNode;
                newNode->data=value;
                printf("%d is inserted\n",newNode->data);
                newNode->ptr=NULL;
                
            }
            top=top->ptr;
        }

    }
}
//Deleting the last element from the stack:
void pop(node *top)
{
    if(top->data==-99999)
    {
        printf("Underflow!\n");
    }
    else if(top->ptr==NULL)//meanogn there is only one node
    {
        printf("Deleted %d from the stack",top->data);
        top->data=-99999;
    }
    else
    while(top!=NULL){
    if((top->ptr)->ptr==NULL){
        printf("Deleting the last element from the stack!\n");
        node *temp;
        temp=(node *)malloc(sizeof(node));
        temp=(top->ptr);
        top->ptr=NULL;
        free(temp);
    }
    }
}
void display(node *top)
{
    if(top->data==-99999)
    printf("Stack is empty");
    else
    while(top!=NULL){
        printf("%d\t",top->data);
        top=top->ptr;
    }
}
int main()
{
    node *top;
    top=(node *)malloc(sizeof(node));
    top->ptr=NULL;
    top->data=-99999;
    int value,choice;
    printf("Welcome to STACK\n");
    while(1){
    printf("1.Push into stack\n2.Delete from stack\n3,Display\n4.Exit\nEnter:\t");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("ENter the value you want to push:\t");
                scanf("%d",&value);
                push(value,top);
                break;
        case 2: pop(top);
                break;
        case 3: printf("Displaying the stack:\n");
                display(top);
                break;
        case 4: printf("Thank You!");
                return 0;
    } 
    }   
}