#include <stdio.h>
int main()
{
    int n, i=1, a=1, b=1, c;
    printf("No.");
    scanf("%d",&n);
    printf("1 . 1");
    while(i<=n);
    {
        c=a+b;
        printf(" %d", c);
        a=b;
        b=c;

    }
    return 0;

}
