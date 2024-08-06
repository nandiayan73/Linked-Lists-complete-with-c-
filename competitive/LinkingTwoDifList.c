#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *ptr;

};
typedef struct Node node;
node *first=NULL;
node *second=NULL;
node  *createList(node *start){
    node *p,*newNode;
    int length,i;
    printf("\nEnter the length of the list");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        p=start;
        newNode=(node *)malloc(sizeof(node));
        printf("Enter the %d data",i+1);
        scanf("%d",&newNode->data);
        newNode->ptr=NULL;
        if(start==NULL){

            start=newNode;
        }
        else{
            while(p->ptr!=NULL)
            {
                p=p->ptr;
            }
            p->ptr=newNode;
        }
        
    }
    return start;

}
void display(node *start){
    printf("\nDisplaying the created list\t");
    while(start!=NULL){
        printf("%d\t",start->data);
        start=start->ptr;
    }
}
//Linking The List:
void linkingTheList(node *f, node *s){
    int a,b,count=0,c;
    node *temp1,*temp2;
    printf("\nEnter the position of the element to be deleted from the first list:\t");
    scanf("%d",&a);
    printf("\nEnter the position of the second element to be deleted from the first list:\t");
    scanf("%d",&b);
    // a=a-1;
    // b=b-1;
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    if(a==-1 || b==-1){
        printf("Invalid input!");
        return;
    }
    while(count<=b){
        if(count==a)
        {
            //Delete a positon of the list.
            for(int i=0;i<a;i++){
                if(i==a-1){
                    f->ptr=(f->ptr)->ptr;
                    temp1=f;
                    break;
                }
                f=f->ptr;
            }
        }
        if(count==b)
        {
            //Delete b positon of the list.
            for(int i=a;i<b;i++){
                if(i==b-2){
                    f->ptr=(f->ptr)->ptr;
                    temp2=f;
                    break;
                }
                f=f->ptr;
            }
        }
        count++;
    }
    //adding after a:
    temp1->ptr=second;
    while(second->ptr!=NULL)
        second=second->ptr;
    second->ptr=temp2;
    printf("Linked linst merged successfully\nShowing the results\n");
}
int main(){
    // first =(node *)malloc(sizeof(node));
    // second=(node *)malloc(sizeof(node));
    printf("Creating the first linked list\n");
    first=createList(first);
    display(first);
    printf("\nCreating the second linked list\n");
    second=createList(second);
    display(second);
    linkingTheList(first,second);
    // printf("Linked linst merged successfully\nShowing the results\n");
    display(first);

    
}