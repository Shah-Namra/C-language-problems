#include<stdio.h>
int main()
{
    int grade1, grade2 , grade3;
    double average;
    printf("Enter grade1");
    scanf("%d", &grade1);
    printf("Enter grade2");
    scanf("%d", &grade2);
    printf("Enter grade3");
    scanf("%d", &grade3);
    average = (grade1 + grade2 + grade3)/3.0;
    printf("average = %lf",average);
}

