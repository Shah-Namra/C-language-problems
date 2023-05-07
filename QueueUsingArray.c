// Implement Queue using Array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define max 5

void screen();
void Insert();
void Delete();
void list();

int ch,front=-1; rear =-1;
int Q[max];

void main()
{
    while(1)
    {
        screen();
        switch (ch)
        {
        case 1:
            Insert();
            break;

        case 2:
            Delete();
            break;

        case 3:
            list();
            break;

        default:
            exit(0);
        }
    }
}
void screen()
{
    printf("\n Queue Operation");
    printf("\n 1.Insert");
    printf("\n 2.Delete");
    printf("\n 3.List");
    printf("\n 4.Exit");
    printf("\n Enter Choice: ");
    scanf("%d",&ch);
}

void Insert()
{
    int item;
    if(rear == max-1)       // Queue is full
        printf("\n OVERFLOW");

    else
    {
        printf("\n Enter info:");
        scanf("%d",&item);      // first element is inserted

        if(front == 1)
        {
            front =0;
            rear =0;
        }
        else {rear++;}
        Q[rear]=item;
    }
}

void Delete()
{
    int item;
    if(front == -1)
    {
        printf("\n Underflow");
    }
    else
    {
        item = Q[front];
        printf("\n Deleted item is %d", item);
        if(front == rear)
        {
            front =-1;
            rear= -1;
        }
        else
        front++;
    }
}
void list ()
{
    if(front == -1)
    {
        printf("Underflow");
    }
    else
    {
        for (int i = front; i<= rear;i++)
        printf("\t %d", Q[i]);
    }
}
