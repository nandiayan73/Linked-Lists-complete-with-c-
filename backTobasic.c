#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;
};
void display(struct Node *start){

while(start->ptr!=NULL){
    printf("%d\n",start->data);
    start=start->ptr;
}
}
int main(){
    struct Node *first;
    struct Node *second;
    struct Node *third;
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    first->data=99;
    first->ptr=second;
    second->data=22;
    second->ptr=third;
    third->data=221;
    third->ptr=NULL;
    // first=second;
    display(first);

}