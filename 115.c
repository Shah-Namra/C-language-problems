#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("enter the value of c:");
    scanf("%d", &c);

    if(a==0||b==0||c==0)
    printf("Sorry");

    else if((a%b ==0 || b%a==0)&& (b%c==0 || c%b==0)&&(a%c==0 || c%a==0))
        printf("Divisible numbers!");
        else
            printf("Sorry");
    return 0;




}
