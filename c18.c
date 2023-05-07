#include<stdio.h>
int main()
{
    int a[5][3],  total [5][3];
    int i, j;
    for (i=0;i<5;i++)
    {
        printf("Enter the name of studet %d", i+1);
        for (j=0; j<3; j++)
        {
            printf("\n Enter the marks: ");
            scanf("%", &a[i][j]);

        }
    }
        for (i=0; i<=5; i++)
        {
            printf("\n marks of student %d", i+1);
            for (j=0; j<3; j++)
            {
                total[i][j]= a[i][j]+ a[i][j]+ a[i][j];
                printf("\n Total marks of student s %d= %d", i+1, total[i][j]);
            }
        }


        return 0;
}
