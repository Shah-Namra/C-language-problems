// Delete an element from an array
#include<stdio.h>
void main()
{
    int a[15];
    int i,n,loc,c;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Please Enter the number: \n");
    for(i=0;i<n;i++)
    {
        printf("\n a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    //n is the location and m is value

    printf("Enter the location: ");
    scanf("%d",&loc);
    for(int c=loc; c<=n-1; c++)
    {
        a[c-1]=a[c];
    }
// Displaying the loop

 printf("Displaying the Array after deletion");
 for(i=0;i<n-1;i++)
    {
    printf("\n a[%d]=%d",i,a[i]);
    }
}
