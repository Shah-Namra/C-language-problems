//wap to insert an element between array
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

    for(int c=n-1; c>=loc-1; c--)
    {
    a[c+1]=a[c];
    }
    a[loc-1]=a[val];
    for (i=0;i<=n;i++)
    {
    printf(" a[%d]=%d\n",i,a[i]);
    }
}
