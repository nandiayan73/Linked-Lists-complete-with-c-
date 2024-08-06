//LINER SEARCHING IN THE LIST
//BINARY SEARCH DOESN'T HAPPEN AS WE CANNOT DIECTLY GO INTO THE MIDDLE OF THE LIST
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *ptr;
};
typedef struct Node node;
node *start=NULL;
void createNodes(int n){
    int i=0;
    node *newNode,*p;
    for(i=0;i<n;i++){
        p=start;
        newNode=(node *)malloc(sizeof(node));
        newNode->ptr=NULL;
        printf("Enter the %d no:\t",i+1);
        scanf("%d",&newNode->data);
        if(start==NULL){
            start=newNode;
        }
        else{
            while(p->ptr!=NULL)
                p=p->ptr;
            p->ptr=newNode;
            
        }
    }
}
void searchTheNodes(int s){
    int c=0;
    node *count=start;
    while(count!=NULL){
        if(count->data==s)
            c++;
        count=count->ptr;
    }
        if(c==1){
            printf("%d fountd\nNo duplicate",s);
        }
        else{
        printf("%d found\n",s);
        printf("%d duplicate of %d found",c-1,s);
        }
    
}
typedef struct Node node;
int main(){
    int n,s;
    printf("Enter the size of the linked-lists:\t");
    scanf("%d",&n);
    printf("Enter the no. you want to search:\t");
    scanf("%d",&s);
    createNodes(n);
    searchTheNodes(s);

}