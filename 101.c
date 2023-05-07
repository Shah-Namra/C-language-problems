#include <stdio.h>
int main()
{
    int a, b;
    char Operation;

    printf("Enter the Operation you want to use(+, -, /, ..): ");
    scanf("%c", &Operation);
    printf("Enter the first number(a): ");
    scanf("%d", &a);
    printf("Enter the second number(b): ");
    scanf("%d", &b);

    switch(Operation)
    {
        case '+':
        printf("%d %c %d = %d \n", a, Operation, b, a+b );
        break;

        case '-':
        printf("%d %c %d = %d \n", a, Operation, b, a-b );
        break;

        case '*':
        if (b==0)
            printf("You cannot do that");
        else
            printf("%d %c %d = %d \n", a, Operation, b, a*b );
        break;

        case '/':
        if (b==0)
            printf("You cannot do that");
        else
            printf("%d %c %d = %d \n", a, Operation, b, a/b );
        break;


        case '%':
        if (b==0)
            printf("You cannot do that");
        else
            printf("%d %c %d = %d \n", a, Operation, b, a%b );
        break;

        default:
            printf("Wrong operation .... TRY AGAIN!!");
            break;


        return 0;


    }

}
