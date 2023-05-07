#include<stdio.h>
int compare(int ,int);

void main()
{
    int a,b,c;
    printf("Value of a: ");
    scanf("%d",&a);

    printf("Value of b: ");
    scanf("%d",&b);

    c=compare(a,b);
    if (c==0)
    printf("A>B");
    else if (c==1)
    printf("A<B");
    if (c==2)
    printf("A=B");


}
int compare(int a, int b)
{

    if (a>b)
    return 0;

   else if (a<b)
    return 1;

   else if (a==b)
    return 2;

}

