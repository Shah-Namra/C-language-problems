#include <stdio.h>
#include <stdlib.h>

int main()
{
//
 int total seconds;
 int hours, minutes, remainingseconds;
 printf("Enter total seconds : ");
 scanf("%d", &totalseconds);
hours= total seconds/ 3600;
minutes = (total seconds - hours*3600)/60;
remainingseconds = (total seconds - hours*3600)%60;
printf("total hours:%d\n ", hours);
printf ("total minutes: %d\n", minutes);
printf("total remainingseconds: %d\n", remainingseconds);

return 0;
}

