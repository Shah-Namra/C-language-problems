#include<stdio.h>

int Sum(int);

void main()
{
    int n;
    printf("ENter No.");
    scanf("%d",&n);

    if(n<0){
    printf("Invalid no.");
    }
    else {
    printf("Sum of %d is %d",n,Sum(n));
    }

}

int Sum(int n)
{
    if(n==0){
    return 0;
    }

    else{
    return n+Sum(n-1);
    }
}
