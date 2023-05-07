#include<stdio.h>
#include<conio.h>


int fun()
{
static int count=0;
count++;
return count;
}
void main()
{

printf("\nCall to fun() %d times",fun());
printf("\nCall to fun() %d times",fun());
printf("\nCall to fun() %d times",fun());
getch();
}
