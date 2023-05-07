// ========SINGLY LINKED LIST==========

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
    int info;
    struct node *link;

};typedef struct node NODE; 

  void Create_link_list(NODE*);//function declaration..........................................................................
  void Display(NODE*);
  
  //Summer 2018:Write an algorithm to count the number of nodes in a singly circularly linked list.(04)
  
  int Count(NODE*);
  int Largest(NODE*);
  NODE* Getnode();
  NODE* Insert_first(NODE*);
  void Insert_last(NODE*);
  NODE* Search(NODE*,int);
  void Insert_after(NODE*);
  NODE* Delete_First(NODE*); 
  void Delete_Last(NODE*);

void main()
{
    int lar;
    int cnt;
    int val;
    NODE*head,*found;
    head=(NODE*)malloc(sizeof(NODE));
    
    Create_link_list(head);//function call........................................................................................
    
    Display(head);
/*    cnt=Count(head);
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

// ----- Insert After ---

Insert_after(head);
printf("\n Linked List afetr Insert: ");
Display(head);

// --- Delete first operation --------

printf("DELETE FIRST OPERATION\n");
head = Delete_First(head);
Display(head);
*/
// ---- DELETE LAST

printf("DELETE LAST OPERATION\n");
head = Delete_Last(head);
Display(head);


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

void Display(NODE*currptr)          //function body
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

//-------------------- First NODE --------------------

NODE* Insert_first(NODE* currptr)
{
    NODE* newnode;
    newnode = Getnode();
    newnode->link = currptr;
    return newnode;
}

//---------- ---------- Last NODE --------------------

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
// -------------------- PALINDROME --------------------


void Insert_after(NODE* currptr)
{
    int search_item;
    NODE* location, *newnode;
    printf("Enter info after which you want to insert new NODE: ");         //  
    scanf("%d",&search_item);
    location = Search(currptr,search_item);
    if(location == NULL)                        //That node is not present
    {
        printf("\n Searched item does not exist ... NODE NOT FOUND...");

    }
    else                // when NODE is PRESENT
    {
        newnode = Getnode();
        newnode->link = location->link;
         location->link = newnode ;
     }
}

NODE* Delete_First(NODE* currptr)
{
    NODE* temp;                     // for Manual Garbage collector
    temp = currptr;
    currptr = currptr -> link;
    temp -> link = NULL;            // to remove first NODE 
    free(temp);                     // free()is the garbage collector in C
    return currptr;   
}

void Delete_Last(NODE* currptr)
{
    while (currptr->link->link!=NULL) //To reach last second node
    {
        currptr = currptr->link;
    }
    currptr -> link = NULL;   
}
// ------------ SINGLY LINKED LIST COMPLETED -------------------- 