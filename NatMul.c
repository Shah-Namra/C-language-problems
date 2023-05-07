// What is recursion? Write a pseudocode in C language to find the multiplication of two natural numbers
#include <stdio.h>
int Product(int ,int);
void main()
{
    int a,b;
    printf("Enter any two natural Numbers");
    printf("Enter any natural Number");
    scanf("%d",&a);
    printf("Enter any natural Number");
    scanf("%d",&b);

    if (a>0 && b>0){
        printf("\n Product of %d and %d is %d ", a,b,Product(a,b));
    }
    else
        printf("Enter valid numbers");

}
int Product(int x , int y)
{
    if (x<y)
        return Product(y,x)

    else if(y!=0)
    return (x+Product(x,y-1));

    return 0;
}
