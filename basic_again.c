#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
}; 
struct Node *first;
// typedef struct Node node;
void create(int a[],int n){
struct Node *newNode,*last;
int i=0;
first->data=a[0];
first->ptr=NULL;
last=first;
for(i=1;i<n;i++){
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=a[i];
newNode->ptr=NULL;
last->ptr=newNode;
last=newNode;
}
last->ptr=NULL;

}
//Printing the list:
// void display(int n){
//     int i=0;
//     // first=first->ptr;
//     struct Node *head;
//     head=first;
//         while(head!=NULL){
//         printf("%d\t",head->data);
//         head=head->ptr;
//     }
// }
//printing the list in reverse:
void reverseDisplay(struct Node *head){
   printf("\n");
   if(head!=NULL){
    reverseDisplay(head->ptr);
    printf("%d\t",head->data);
   } 

}
int main(){
    
    // int *a;
    // a=(int *)malloc(sizeof(int));
    first=(struct Node *)malloc(sizeof(struct Node));
    int a[10],i,n;
    printf("Enter the length of the array:\t");
    scanf("%d",&n);
    puts("Enter the value of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    create(a,n);
    // display();
    reverseDisplay(first);
}