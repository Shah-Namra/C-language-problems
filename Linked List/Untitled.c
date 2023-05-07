#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
struct node//use structure to take user define data    and to make node
{
    int info;
    struct node *link;
};
typedef struct node NODE;

void Create_link_list(NODE *);//function declaration
void Display(NODE*);//function declaration
int Count(NODE*);//WRITE AN ALGORITHM TO COUNT THE NUMBER OF NODE IN A SINGLY CIRCULARLY LINKED LIST
int Largest(NODE*);

void main()
{
    int cnt,max;
    NODE *head;
    head = (NODE *)malloc(sizeof(NODE));//malloc for memory allocation
    Create_link_list(head);//function call
    Display(head);//function call

    cnt=Count(head);
    max=Largest(head);
    printf("\nTotal no.of Elements:%d",cnt);
    printf("\n Largest element in the list is %d",max);
}

// function body-------------------------------------------------------------------------------------------------------------------------------------------
void Create_link_list(NODE* currptr)
{
    NODE *newnode;
    char ans;
    while (1)
    {
        printf("Enter info.:");
        scanf("%d", &currptr->info);
        fflush(stdin);
        printf("Do you want to continue ");
        scanf("%c", &ans);
        if (toupper(ans)=='Y')
        {
            newnode = (NODE*)malloc(sizeof(NODE));
            currptr->link = newnode;
            currptr = newnode;
        }
        else
        {
            currptr->link = NULL;
            break;
        }
    }
}
//----------------------------------------------FUNCTION BODY--------------------------------------
void Display(NODE* currptr)
{
    while(currptr!=NULL)
    {
        printf("%d\n",currptr->info);
        currptr=currptr->link;
    }
}
//---------------------------------------------function body---------------------------------------------
int Count(NODE* currptr)
{
int cnt=0;

while(currptr!=NULL)
{ 
     cnt++;
    currptr=currptr->link;
}
return (cnt);

}
// int Largest(NODE* currptr)
// {
//     int max=currptr->info;

//     if(max<currptr->link->info)
//     {
//         max=currptr->link->info;
//     }
//     else{
//     currptr=currptr->link;
//     }
//     return(max);
// }

// ----------------- LARGEST NODE -------------------

int Largest(NODE* currptr)
{
    int big=currptr->info;
    currptr=currptr->link;
    while(currptr)
    {
        if(big<currptr->info)
        {
            big=currptr->info;
        }
    }
    return big;
}