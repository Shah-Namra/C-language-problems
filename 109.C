#include <stdio.h>
int main()
{
    // Q 1 = x +ve and y +ve
    // Q 2 = x -ve and y +ve
    // Q 3 = x -ve and y -ve
    // Q 4 = x +ve and y -ve
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d,%d", &x,&y);

    if (x>0 && y>0)
        printf("The point is located in first quadrant");
        else if(x>0 && y<0 )
            printf("THe point is located in fourth quadrant");
        else if(x<0 && y<0)
            printf("THe point is located in third quadrant");
        else if(x<0 && y>0)
            printf("the point is located in Second quadrant");
        return 0;





}
