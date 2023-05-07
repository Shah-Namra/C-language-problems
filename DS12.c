// WAP to  enter 5 number and display them
#include <stdio.h>
void main()
{
    int no[5],i;
    printf("Enter 5 Numbers\n");

    for(i=0;i<5;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&no[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nEnter the value of no %d: %d",i,no[i]);
    }






}
