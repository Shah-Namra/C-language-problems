#include <stdio.h>
#include "cadd.c"
#include "csub.c"
#include "cmul.c"
#include "cdiv.c"

void main()
{
    int a,b,c;
    printf("Enter the value of first number: ");
    scanf("%d",&a);
    printf("\nEnter the value of second number: ");
    scanf("%d",&b);


    printf("\nAddition of two numbers %d and %d is : %d",a,b,cadd(a,b));
    printf("\nSubtraction of two numbers %d and %d is : %d ",a,b,csub(a,b));
    printf("\nDivision of two numbers %d and %d is : %d",a,b,cmul(a,b));
    printf("\nMultiplication of two numbers %d and %d is : %d",a,b,cdiv(a,b));


}

