//Input string and print its length

#include<stdio.h>
#include<string.h>

void main()
{
 int len;
 char na[20];
 printf("Enter the name :");
 scanf("%[^a]",na);// till a sting will be readed
 len=strlen(na);
 printf("Length of name is :%d",len);

}
