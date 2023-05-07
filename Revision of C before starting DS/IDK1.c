#include<stdio.h>

int cadd(int,int);
int csub(int,int);
int cmul(int,int);
int cdiv(int,int);

int main()
{
    int a,b;
    printf("Enter the value of first number: ");
    scanf("%d",&a);
    printf("\nEnter the value of second number: ");
    scanf("%d",&b);


    printf("\nAddition of two numbers %d and %d is : %d",a,b,cadd(a,b));
    printf("\nSubtraction of two numbers %d and %d is : %d ",a,b,csub(a,b));
    printf("\nDivision of two numbers %d and %d is : %d",a,b,cdiv(a,b));
    printf("\nMultiplication of two numbers %d and %d is : %d",a,b,cmul(a,b));

    return 0;
}

