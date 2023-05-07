#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
    int info;
    struct node *link;

};typedef struct node NODE;

  void Create_link_list(NODE*);     //function declaration..........................................................................
  void Display(NODE*);
  //Summer 2018:Write an algorithm to count the number of nodes in a singly circularly linked list.(04)
  int Count(NODE*);
  int Largest(NODE*);
  NODE* Getnode();
  NODE* Insert_first(NODE*);
  void Insert_last(NODE*);
  NODE* Search(NODE*,int);

void main()
{
    int lar;
    int cnt;
    int val;
    NODE*head,*found;
    head=(NODE*)malloc(sizeof(NODE));
    Create_link_list(head);//function call........................................................................................
    Display(head);
    cnt=Count(head);
    lar=Largest(head);
    printf("\n Total no. of Element:%d",cnt);
    printf("\nLargest element in the list is %d",Largest(head));
    printf("\n\nInsert First Operation :");
    head = Insert_first(head);
    Display(head);
    printf("\n\nInsert Last Operation :");
    Insert_last(head);
    Display(head);
    printf("\nSearch Operation ...");
    printf("\nEnter Value of Node to Search :");
    scanf("%d",&val);
    found = Search(head,val);
    if (found == NULL)
    {
        printf("\nNot Found....");
    }
    else
    {
        printf("\nFound....");
    }
}

void Create_link_list(NODE* currptr)//function body..............................................................................
{
    NODE*newnode;
    char ans;
    while(1){
        printf("Enter info.:");
        scanf("%d",&currptr->info);
        fflush(stdin);
        printf("Do you want to continue ");
        scanf("%c",&ans);
        if(toupper(ans)=='Y')
        {
            newnode=(NODE*)malloc(sizeof(NODE));
            currptr->link=newnode;
            currptr=newnode;
        }
        else
            {
                currptr->link=NULL;
                break;
            }
    }
}

void Display(NODE*currptr)//function body
{
    while(currptr!=NULL)
    {
        printf("%d\n",currptr->info);
        currptr=currptr->link;
    }
}

int Count(NODE* currptr)
{
    int cnt=0;
    while(currptr!=NULL)
    {
        cnt++;
        currptr=currptr->link;
    }
    return(cnt);
}

int Largest(NODE* currptr)
{
    int lar=currptr->info;
    currptr=currptr->link;
    while(currptr!=NULL)
    {
        if(lar<currptr->info)
        {
         lar=currptr->info;
        }
        currptr=currptr->link;
    }
    return(lar);
}

//function body
NODE* Getnode()
{
    NODE* newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    printf("\nEnter Info :");
    scanf("%d",&newnode->info);
    return newnode;
}

NODE* Insert_first(NODE* currptr)
{
    NODE* newnode;
    newnode = Getnode();
    newnode->link = currptr;
    return newnode;
}

void Insert_last(NODE* currptr)
{
   NODE* newnode;
   newnode = Getnode();
   newnode->link = NULL;
   while(currptr->link!=NULL)
   {
       currptr = currptr->link;
   }
   currptr->link = newnode;
}

//function body...
NODE* Search(NODE* currptr,int item)
{
    while(currptr!=NULL)
    {
        if(currptr->info == item)
        {
            break;
        }
        currptr = currptr->link;
    }
    return currptr;
}