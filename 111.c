#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of month: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("feb");
            break;
        case 3:
            printf("march");
            break;
        case 4:
            printf("april");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("June");
            break;
        default:
            printf("SORRY");
            break;
    }

}

