#include <stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 60)
        printf("Congratulations!! \n");
    else
        printf("Failed... Please try again \n");
    return 0;
}
