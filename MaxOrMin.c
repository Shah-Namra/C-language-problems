#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter the value of num1: ");
    scanf("%f", &num1);
    printf("Enter the value of num2: ");
    scanf("%f", &num2);

    if(num1>num2)
    {
        printf("Maximum = %f \n", num1);
        printf("Manimum = %f \n", num2);
    }
    else
    {
        printf("Maximum = %f \n", num2);
        printf("Minimum = %f \n", num1);

    }

}
