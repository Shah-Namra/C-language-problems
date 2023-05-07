//WAP to enter size of array and enter elements and enter element to search
#include <stdio.h>

void main()
{
    int no[15],flag=0,i,n,m;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Please Enter the number: \n");
    for(i=0;i<n;i++)
    {
        printf("no[%d]: ",i);
        scanf("%d",&no[i]);
    }

    printf("\n--------------------------------------------- ");

    printf("\nDisplaying Numbers: \n");

    for(i=0;i<n;i++)
    {
        printf(" no[%d]=%d\n",i,no[i]);

    }

    printf("\n--------------------------------------------- ");

    printf("\nEnter element to search: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(i==m)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("\n------Not found------");
    }

    else
    {
        printf("\n------Found------");
    }
}
