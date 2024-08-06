#include<stdio.h>
int main(){
    int *p;
    int a;
    printf("ENter the value of a :\t");
    scanf("%d",&a);
    p=&a;
    printf("%x==%x",&a,p);

}