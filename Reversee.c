// WAP to revere a string using stack
#include<stdio.h>

void Reverse();

void main()
{


    printf("\n Enter Any sentence: ");
    Reverse();
}

void Reverse( )
{
    char c;
    if((c=getchar())!='\n')
    Reverse();
    putchar(c);
    return;
}A
