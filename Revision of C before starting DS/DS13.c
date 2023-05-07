// WAP to enter n number and display them and print max and min
#include<stdio.h>
int main()
{
    int no[100],i,n,sum=0,max,min;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("Enter %d Numbers\n",n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&no[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of no %d: %d",i,no[i]);
        sum=sum+no[i];
    if(max<no[i])
    {
        max=no[i];
    }
   if(min>no[i])
    {
        min=no[i];
    }


    }
    printf("\nThe sum of %d elements is:%d ",n,sum);
    printf("\nThe Max number is:%d ",max);
     printf("\nThe Min number is:%d ",min);



}



