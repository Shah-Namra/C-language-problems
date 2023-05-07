#include<stdio.h>
void main()
{
    int i=10, j=5;
    int *p,*q;
    p=&i;
    q=&j;
    printf("\nValue of i=%d and j=%d ",i,j);
    printf("\nValue of i=%d and j=%d ",*p,*q);
    *q=500;
    printf("\nValue of i=%d and j=%d",*p,*q);

    // Address of p and q
    printf("\nValue of i=%u and j=%u ",p,q);


}
