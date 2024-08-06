#include<stdio.h>
#include<stdlib.h>
int length;
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
void values(node *start){
int i=0;
// while(start->ptr!=NULL){
    // scanf("%d",&start)
// }
while(start!=NULL){
    printf("Enter the no:\t");
    scanf("%d",&start->data);
    start=start->ptr;

}
}
void printValues(node *start){
    int i=0;
    while(start!=NULL){
        printf("the no:\t%d",start->data);
        start=start->ptr;
    }
}
int main()
{
// int length;
printf("Enter the length of the linked lists:\t");
scanf("%d",&length);
node *head;
node *first;
head=(node *)malloc(sizeof(node));
first=(node *)malloc(sizeof(node));
head->ptr=first;
first->ptr=NULL;

// printf("The size is %d",sizeof(struct Node));
// node *third;
// node *fourth;
// printf("the value is :\t%x\n",head);
// printf("The adddress is:\t%x",&head);
values(head);
printValues(head);
}