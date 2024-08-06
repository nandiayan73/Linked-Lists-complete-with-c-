// Arrangin the nodes in ascending order
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
void listInOrder(node *ptr){
    int temp,flag;
    while (1){
        flag=0;
        while((ptr->ptr)!=NULL)
        {
                if(ptr->data<(ptr->ptr)->data)
                {
                    temp=ptr->data;
                    ptr->data=(ptr->ptr)->data;
                    ptr=ptr->ptr;
                    flag=1;
                }
        }
        if(flag==0)
        break;
    }
    }

int main()
{
    node *head;
    node *fourth;
    node *second;
    node *third;
    node *fifth;
 head =(node *)malloc(sizeof(node));
 second=(node *)malloc(sizeof(node));
 third =(node *)malloc(sizeof(node));
 fourth =(node *)malloc(sizeof(node));
 fifth =(node *)malloc(sizeof(node));
//Linking the list:
head->ptr=second;
second->ptr=third;
third->ptr=fourth;
fourth->ptr=fifth;
fifth->ptr=NULL;
listInOrder(head);
printf("Enter the 1st number:\t");
scanf("%d",&head->data);
printf("Enter the 2nd number:\t");
scanf("%d",&second->data);
printf("Enter the 3rd number:\t");
scanf("%d",&third->data);
printf("Enter the 4th number:\t");
scanf("%d",&fourth->data);
printf("Enter the 5th number:\t");
scanf("%d",&fifth->data);
return 0;


}
