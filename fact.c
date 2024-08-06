#include<stdio.h>
int factorial(int n){
    if(n==1)
    return 1;
    
    return n*factorial(n-1);
}
int main()
{
    int n,res;
    printf("Enter the  number\t");
    scanf("%d",&n);
    res= factorial(n);
    printf("The factorial of %d is %d",n,res);
    return 0;
}