#include<stdio.h>
int main()
{
    int n, sum =0 ,i ,num;
    float  avg;
    printf("How many no. do u want : ");
    scanf("%d",&n);

        printf("Enter the no.: ");
        scanf("%d",&num);

    for (i =1; i<=n; i++)
    {
        sum+=num;
    }
    avg= sum/n;
    printf("the sum is = %d", sum);
    printf("\n the avg is = %d", avg);
     return 0;

}
