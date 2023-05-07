#include <stdio.h>
int main()
{
    int a;
    printf("Enter the marks your obtained: ");
    scanf("%d", &a);

    if(a>=80)
    {
        printf("Excellent job");
    }
    else if (a>=60)
    {
        printf("Not bad....");
    }
        else
        {
            printf("Ohh... Your didt pass");

        }
    return 0;
}
