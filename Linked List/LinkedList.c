#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

struct node                     // Use Structre to take user define data and to make node
{
    int info;
    struct node *link;
}; 
typedef struct node NODE;           // instead of writing whole thing u just need to write NODE.....(TYPE DEFINE)

void Create_link_list(NODE*);           // Function declaration
void Display(NODE*);
int Count(NODE*);
int Largest(NODE*);
NODE* Getnode();
NODE* Insert_first(NODE*);
void Insert_last(NODE*);
NODE* Search(NODE*,int);                //To search a particular Node is present or not 

void main()
{
    int lar;// In JK's code lar is thre instead of max 
    int cnt, max,val;
    NODE *head,*found;
    head = (NODE*) malloc (sizeof(NODE)); // malloc for memory allocation
    Create_link_list(head);                  // Function call
    Display(head);                          //Function call
    cnt = Count(head); 
    max = Largest(head);
    printf("\n Total no. Of Elements %d",cnt);
    printf("\n Largest no. in the list is %d",max);
    printf("\n\n Insert First Operation");
    head = Insert_first(head);
    printf("\nLinked List after insert First \n");
    Display(head);
    printf("\n\n Insert Last Operation");
    Insert_last(head);
    Display(head);
    printf("\nLinked List after Last Operation");
    Display(head);
    printf("Search Operation");
    printf("Enter the Node to search");    
    scanf("%d",&val);    
    found=Search(head, val);
    if (found == NULL){
        printf("Node is Not present");
    }
    else{
        printf("Node is present");
    }

}

//------------ FUNCTION BODY --------------

void Create_link_list(NODE* currptr)
{
    NODE *newnode;
    char ans;
    while(1)
    {
        printf("Enter info. ");
        scanf("%d",&currptr->info);
        
        fflush(stdin);              // Used becoz sometimes every value inserted is not accepted or can be said its is skipped ... to prevent skipping
        
        printf("Do you want you Continue ?");
        scanf("%c",&ans);
        
        if (toupper(ans)=='Y')              // toupper is used to convert input by user to convert in Captial Alphabet
        {
            newnode = (NODE*) malloc (sizeof(NODE)); // 
            currptr -> link = newnode;
            currptr = newnode; 
        }
        else
        {
            currptr-> link = NULL; // 
            break;
        }
        

    }
}
// ----------------- FUNCTION BODY -------------------

void Display (NODE* currptr)
{
    while (currptr!= NULL) // LOGIC: Last NODE has Null 
    {
        printf("%d \n", currptr-> info);
        currptr = currptr->link;            // to shift the Currptr to next NODE 
    }
}

// ----------------- FUNCTION BODY -------------------

int Count (NODE* currptr)           // count number of elements 
{
    int cnt=0;                      // logic: loop till currptr is NULL as pointer of last node is NUll
    while (currptr!=NULL)
    {
        cnt++;
        currptr=currptr->link;
    }
    return(cnt);   
}

// ----------------- LARGEST NODE -------------------
int Largest(NODE* currptr)
{
      int max=currptr->info;

     if(max<currptr->link->info)
     {
         max=currptr->link->info;
     }
     else{
            currptr=currptr->link;
         }
     return(max);  
}

// ------ Insert Last Node ... First and Get NODE baaki che ... JK------


// -------------To Search a Particular NODE (FUNCTION BODY) ------------
NODE* Search(NODE* currptr, int val)
{
    while(currptr!= NULL)  
    {
        if(currptr -> info == val)          // if this is true 
        {
            break;
        }
        
        currptr = currptr -> link;              // to Check the next node ... currptr will be check next NODE
    }
    return currptr;
}
