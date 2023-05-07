#include<stdio.h>
int main()
{
    int n, rev = 0, m;
    printf("Enter the no.= ");
    scanf("%d",&n);

    while(n>0);
    {
        m=n%10;
        rev =rev*10 + m;
        n/=10;
    }
    printf("The reverse no. is : %d", rev);
    return 0;

}
