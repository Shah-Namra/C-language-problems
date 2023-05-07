#include<stdio.h>

int Factorial(int);

void main()
{
    int n;
    printf("ENter No.");
    scanf("%d",&n);
    
    if(n<0){
    printf("Invalid no.");
    }
    else {
    printf("Factorial of %d is %d",n,Factorial(n));
    }

}

int Factorial(int n)
{
    if(n==0){
    return 1;
    }
    
    else{ 
    return n*Factorial(n-1);
    }
}