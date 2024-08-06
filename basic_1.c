#include<stdio.h>
#define size 100
#define array_clear 0000
#define overflow   9999
#define underflow -99999
int r=-1,f=-1;
char queue[100];
int insert(char x)
{
if(r==-1)
{
    f++;
}
if(r==size-1)
{
    printf("queue Overflow\n");
    printf("Delete to insert again\n");
    return overflow;
}
queue[++r]=x;

}
int delete()
{
    if(f==-1)
    {
        printf("Queue underflow\nNothing to delete!");
        return underflow;
    }
    else if(f==r){
        char temp;
        temp=queue[f];
        if(r==f)
        printf("The last element deleted\n");
        f=r=-1;
        return temp;

    }
    else {
        
        return queue[f++];
    }
}
void display()
{
    int i=0;
    if(r==-1)
    printf("Nothing to Display,Queue Empty!\n");
    else
    for(i=f;i<=r;i++)
    printf("%c\t",queue[i]); 
}
int main()
{   int choice,i,n;
    char x,res;
    printf("Welcome to Queue\n");
    while (1)
    {
        printf("\n1.insert\n2.delete\n3.view elements\n4.exit\nEnter\t");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:printf("Enter the elements you want to enter:\t");
            fflush(stdin);
            scanf("%c",&x);
            insert(x);
            break;
            case 3:printf("Viewing the elements\n");
            display();
            break;
            case 2:res=delete();
            if(res!=underflow)
            printf("Deleted %c successfully!\n",res); 
            // printf("\nNothing to delete");
            break;
            case 4:printf("Thank You!");
                   return 0;

        }
    }
}
