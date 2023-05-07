#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of asterisks: ");
    scanf("%d",&a);
     while (a>0)
    {
        printf("*");
        a=a-1;
    }
    printf("\n")
    return 0;
}

