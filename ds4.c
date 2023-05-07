#include<stdio.h>
void compare(int ,int);

void main()
{
    int a,b;
    printf("Value of a: ");
    scanf("%d",&a);

    printf("Value of b: ");
    scanf("%d",&b);

    compare(a,b);

}
void compare(int a, int b)
{

    if (a>b)
        printf("A is greater than B");


   else if (a<b)
        printf("A is Less than B");


   else if (a==b)
        printf("A is equal to B");


}

