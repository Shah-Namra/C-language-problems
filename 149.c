#include<stdio.h>
int main()
{
    int num, pow;
    int tempPow;
    int result = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the power : ");
    scanf("%d", &pow);
    tempPow = pow;
    while (pow>0)
    {
        result = result * num;
        pow-- ;
    }
    printf("%d ^ %d = %d \n",num, tempPow, result);
    return 0;
}
