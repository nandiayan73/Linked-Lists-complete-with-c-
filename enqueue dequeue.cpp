#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define SIZE 10
int front=-1,rear=-1;
int queue[SIZE];
void enqueue(int n)
{
	if(rear==SIZE-1)
	printf("\nQueue is full, Dequeue to insert more=> Queue overflow");
	else
{
	rear++;
	queue[rear]=n;
	printf("%d enqueued",queue[rear]);
	
}
	if(front==-1)
	front=0;
	
}
void dequeue()
{
	if(front==-1|| front==rear+1)
	printf("\nQueue is empty,cannot delete=> Queue underflow");
	else
	{
	front++;
	printf("%d is deleted",queue[front]);
}
}
void display()
{
	int i=front;
	while(i<rear+1)
{
		printf("\n%d",queue[i]);
		i++;
	}
}
int main()
{
	int i,choice;
	int m=3;
	printf("Enter your choice:\n1.Enqueue\n2.display the queue\n3.Delete\nEnter");
loop:
	scanf("%d",&i);
	switch(i)
	{
		case 1: printf("Enter the element you want to enqueue\t");
		scanf("%d",&choice);
		enqueue(choice);
		break;
		
		case 2: printf("Displaying the queue in");
		while( m!=0)
		{
			printf("%d",m);
			m--;
			sleep(1);
			system("cls");
		}
		display();
		break;
		case 3:printf("You have chosen to dequque");
		dequeue();
		break;
		default: printf("Invalid Input");
		break;
	}
	printf("\nWhat next?\n1.Enqueue\n2.Display Queue\n3.Dequeue\n4.Exit\nEnter your choice\t");
//	scanf("%d",&choice);
	if(choice==4)
	return 0;
	else
	goto loop;
	
	
	
		
	
}
