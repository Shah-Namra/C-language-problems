#include<stdio.h>
void main()
{
    int a=5 ;
    switch(a)
    {
    case'1':
        printf("One");
    case'2':
        printf("Two");
    case'3':
        printf("Three");
        default: printf("None");
        break;
    }

// '1' is not equal to "1"
}
