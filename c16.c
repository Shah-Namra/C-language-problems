#include<stdio.h>
int main()
{
    int n, l, f, sum;
    printf("Enter any no.:  ");
    scanf("%d",&n);

    l=n%10;
    while (n>=10)
    {
        n=n/10;

    }
    f=n;
    sum= f+l;
    printf("sum = %d", sum);
     return 0 ;

}
