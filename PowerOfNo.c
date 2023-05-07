#include <stdio.h>
int main()
{
    int x;
    int x2, x4, x6, x8;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    x2 = x*x;
    x4 = x*x*x*x;
    x6 = x*x*x*x*x*x;
    x8 = x*x*x*x*x*x*x*x;
    printf("X^2=%d \nX^4 =%d \nX^6 = %d \nX^8 =%d\n", x2,x4,x6,x8);
    return 0;


}
