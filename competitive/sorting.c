#include<stdio.h>
#include<stdlib.h>//.
struct Node{
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *first=NULL;
void createList(int a){
    node *newNode,*p;
    int i=0;
    for(i=0;i<a;i++){
        newNode=(node *)malloc(sizeof(node));
        printf("ENter the %d data\t",i+1);
        scanf("%d",&newNode->data);
        newNode->ptr=NULL;
        if(first==NULL){
            first=newNode;
        }
        else{
            p=first;
            while(p->ptr!=NULL)
                p=p->ptr;
            p->ptr=newNode;
            
        }

    }
}
void display(){
    node *p=first;
    printf("\n");
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->ptr;
    }
}
//CODE FOR SORTING:
void sortingTheList(){
    node *p=first,*temp=first,*n,*k,*j,*s;
    while(p->ptr!=NULL){
        temp=p->ptr;
        while(temp!=NULL){
            s=temp->ptr;
            k=first;
            j=first;
            if(temp->data<p->data){
                while((k->ptr)->data!=temp->data){
                   k=k->ptr; 
                }
                k->ptr=p; 
                p->ptr=temp->ptr;
                if(first==j){
                    temp->ptr=first->ptr;
                    first=temp;
                }
                else{
                    while((j->ptr)->data!=p->data){
                        j=j->ptr;
                    }
                    j->ptr=temp;
                    temp->ptr=p->ptr;
                }
            }
            temp=s;
        }
        p=p->ptr;
    }

}
int main(){
// first=(node *)malloc(sizeof(node));
int a;
printf("Enter the length of the list:\t");
scanf("%d",&a);
createList(a);
display();
sortingTheList();
display();
}