 // Q) write c function to implememnt Insert_First ,Delete_First and Delete_last and Traverse(to display the data in nodes) operstions in Circular Linked List 
// Q) WAP to implement a circular linked list

#include <stdio.h>
#include <stdlib.h> // malloc
#include <ctype.h> // toupper

struct node
{
    int info;
    struct node *link;

};typedef struct node NODE;

void Create_CL(NODE*); 
void Display(NODE*);
NODE* Getnode();
NODE* Insert_first(NODE*);
void Insert_Last (NODE*);
NODE* Delete_first(NODE*);
void Delete_last(NODE*);

void main()
{
    NODE *head;
    head=(NODE*)malloc(sizeof(NODE));
    printf("\n Circular Linkedlist is creating");
    Create_CL(head);
    printf("Displaying Circular linkedlist");
     Display(head);

    // ------CALLING INSERT_FIRST--------
    head = Insert_first(head);
    printf("Circular Linked list after insert first");
    Display(head);

    //------- CALLING INSERT LAST----------
    Insert_Last (head);
    printf("Circular Linked list after nsert last");
    Display(head);

    // ----------- Delete first ----------
    printf("Deleteing First node");
    head = Delete_first(head);
    printf("After deleting");
    Display(head);
     
    // -------- Delete last------
    Delete_first(head);
    printf("After deleting");
    Display(head);
    

}
void Create_CL(NODE* currptr)
{
    NODE* newnode,*first;
    first = currptr;
    char ans;
    int count=0;
    while(1)
    {
        printf("\nEnter the info:");
        scanf("%d",&currptr->info);
        
        printf("\nDo you want to Continue: ");
        fflush(stdin);
        scanf("%c",&ans);
        
        if (ans == 'Y' || ans == 'y')
        {
            
            newnode=(NODE*)malloc(sizeof(NODE));
            currptr -> link = newnode;
            currptr = newnode;
            count ++;
        }
        else 
        {
            currptr -> link = first;
            break; 
        } 
    }//end of while
    printf("No. of nodes are %d\n",count);

}// end of function 

void Display(NODE* currptr)
{
    NODE* first;
    //int count=0;
    first = currptr;
    do
    {
        printf("\n %d ",currptr-> info);
        currptr= currptr -> link;
      //  count++;
    }while(currptr != first);
    //printf("NUMBER OF NODES : %d",count);
}

NODE* Getnode()
{
    NODE* newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    printf("\nEnter the info:");
    scanf("%d",&newnode->info);
    newnode -> link = NULL;
    return newnode;
}

NODE* Insert_first(NODE* currptr)
{
    NODE* newnode,*oldfirst;
    newnode = Getnode();
    oldfirst = currptr;
    while(currptr -> link != oldfirst)
    {
        currptr = currptr -> link;
    }
    currptr -> link = newnode;
    newnode -> link = oldfirst;
    return newnode;
}

void Insert_Last(NODE* currptr)
{
    NODE* newnode,*oldfirst;
    newnode = Getnode();
    oldfirst = currptr;
    while (currptr->link != oldfirst)
    {
        currptr = currptr -> link;
    }
    currptr -> link = newnode;
    newnode -> link = oldfirst;

}

void Delete_first(NODE* currptr)
{
    NODE* first;
    first = currptr;
    while(currptr -> link != first)
    {
        currptr = currptr -> link;
    }
    currptr-> link = first -> link ;
    return first->link;
} 
NODE* Delete_last(NODE* currptr)
{
    NODE* Last;
    while(currptr -> link -> link != first)
    {
        currptr = currptr -> link;
    }
    currptr-> link = first ;
    
}