#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,i,m=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d",fibonacci(m));
        m++;
    }
}
    int fibonacci(int)
    {
        if(n==0 || n==1)
           return n;

        else
        return (fibonacci(n-1)+ fibonacci(n-2));

    }


