#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

 void createLinkedList(int n){
	
	int i;
	struct Node *temp=NULL;
	struct Node *p=NULL;
for(i=0;i<n;i++){

   temp= (struct Node*)malloc(sizeof(struct Node));
   printf("enter the data%d\t",i+1);
   scanf("%d",&(temp->data));
   
   if(head==NULL){
   	head=temp;
   	temp->next=NULL;
   }
   else{
   	p=head;
   	while(p!=NULL){
        // printf("%d",p->data);
        // printf("%d",p->next);
        // p->next=NULL;
   		p=p->next;
   		p->next=temp;
	   }
       temp->next=NULL;
   }
   
   
}
	
}

// void sumOfNodes(){
// 	int sum=0;
//     int p=0;
// 	while(p!=0){
// 		sum=sum+p->data;
// 		p=p->next;
// 	}
	
// }

void displayLinkedList(struct Node*head){
	struct Node *p=head;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
int main(){
	int n=0;
	printf("Enter the number the nodes:\n");
	scanf("%d",&n);
	createLinkedList(n);
	displayLinkedList(head);
	
}