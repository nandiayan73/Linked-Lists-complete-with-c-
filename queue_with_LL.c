#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *ptr;
};
typedef struct Node node;
//Enqueueing in the list
void enqueue(node *head,int input){
    if(head->ptr==NULL & head->data==-99999)
    {
        head->data=input;
        printf("%d inserted in the queue",input);
    }
    else {
        node *newNode;
        newNode=(node *)malloc(sizeof(node));
        while(head->ptr!=NULL){
            head=head->ptr;
        }
        head->ptr=newNode;
        newNode->data=input;
        newNode->ptr=NULL;
        printf("%d inserted inside the queue",input);
    }

}
// Dequeueing the list
struct Node *dequeue(node *head)
{
    if(head->data==-99999 && head->ptr==NULL){
        printf("Queue UNDERFLOW!\n");
    }
    else if(head->data!=-99999 && head->ptr==NULL){
        head->data=-99999;
        head->ptr=NULL;
    }
    else{
        printf("%d deleted from the queue.\n",head->data);
        return head->ptr;
    }

}
//Displayign the queue:
void display(node *head){
 if(head->data==-99999 && head->ptr==NULL){
        printf("Queue is empty. Nothing to display!\n");
    }
else
while(head!=NULL){
    printf("%d\t",head->data);
    head=head->ptr;
}
}
int main(){
int choice,input;
node *first;
first=(node *)malloc(sizeof(node));
first->data=-99999;
first->ptr=NULL;
while (1){
printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter Your Choice:\t");
scanf("%d",&choice);
switch(choice){
    case 1: printf("\nEnter the no, you want to enqueue:\t");
    scanf("%d",&input);
    enqueue(first,input);
    break;
    case 2:first=dequeue(first);
    break;
    case 3:display(first);
    break;
    case 4: printf("\nThank You!");
            return 0;
            break;
    default:printf("\nInvalid input! Please retry.\n");
            break;
}
}
}