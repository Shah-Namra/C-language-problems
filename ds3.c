#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the vale of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }

    else if (a<b)
    {
        printf("%d is Smaller than %d",a,b);
    }

    else if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
}
