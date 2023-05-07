#include<stdio.h>

int cadd(int,int;
int csub(int,int);
int cmul(int,int);
int cdiv(int,int);

int main()
{
    int a,b,c;
    printf("Enter the value of first number: ");
    scanf("%d",&a);
    printf("\nEnter the value of second number: ");
    scanf("%d",&b);

    c=cadd(a,b);
    c=csub(a,b);
    c=cmul(a,b);
    c=cdiv(a,b);

    printf("\nAddition of two numbers %d and %d is : %d",a,b,c);
    printf("\nSubtraction of two numbers %d and %d is : %d ",a,b,c);
    printf("\nDivision of two numbers %d and %d is : %d",a,b,c);
    printf("\nMultiplication of two numbers %d and %d is : %d",a,b,c);

    return 0;
}

int cadd(int x,int y)
{
    return x+y;
}

int csub(int x,int y)
{
    return x-y;
}
int cmul(int x,int y)
{
    return x*y;
}
int cdiv(int x,int y)
{
    return x/y;
}
