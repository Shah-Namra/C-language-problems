#include<stdio.h>
void swap(int,int)//declaration and returns void and its formal paramter
{
    int a=5, b=20, c;
    printf("value of A=%d B=%d ",a,b);

    swap(a,b); // function call and actual parameter ... Pass by value... we are passing value of a and b

    printf("\n Value of A=%d B=%d ",a,b);

}
// function body
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("\n Value of A=%d B=%d ",x,y);

}
