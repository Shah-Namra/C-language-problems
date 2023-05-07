#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    if (a>10 && a<100)
        printf("A is 2 digit number");
    else if (a>99 && a<1000)
        printf("A is 3 digit number");
    return 0;

}
