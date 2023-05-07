//wap to update the value at particular location
#include <stdio.h>
void main()
{
    int a[15];
    int i,n,loc,val,c;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Please Enter the number: \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    //n is the location and m is value

    printf("Enter the location: ");
    scanf("%d",&loc);

    printf("Enter the value to insert: ");
    scanf("%d",&val);

    a[loc-1]=val;
    for(i=0;i<=n;i++)
    {
    printf(" a[%d]=%d\n",i,a[i]);
    }
}
