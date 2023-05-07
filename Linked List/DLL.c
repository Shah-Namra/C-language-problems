// ============= DOUBLY LINKED LIST =========== 
#include<stdio.h>
#include<stdlib.h>      // to use malloc 
#include<ctype.h>       // to use toupper

struct node
{
    // 3 variables need to be define for the doubly linked list 

    int info;
    struct node *next;
    struct node *prev;
}; typedef struct node NODE;

NODE* Getnode();        // to make a new node
void Display_forward(NODE*);        // from left == NULL                        
void Display_backward(NODE*);
NODE* Insert_first(NODE*);
NODE* Insert_last(NODE*);
NODE* Search(NODE*, int);
NODE* Insert_before(NODE*);
 

void main()
{
    char ans;
    int value;
    NODE *left = NULL, *right=NULL , *newnode,*found;
    
    while (1)
    {
        printf("\nDo you want to create new node\n");
        fflush(stdin);          // used to take all values that was inputed
        scanf("%c",&ans);
        if(toupper(ans)=='N')                //ans =='n'|| ans == 'N'
        {
            break;
        }
        else
        {
            newnode = Getnode();        // newnode has the address of node
            if (right == NULL)          // left is also NULL
            {
                left = newnode;
                right = newnode ;
            }
            else                // ---------------------??----------
            {
                right -> next = newnode ;
                newnode -> prev = right ;
                right = newnode ;
            }
        }// end of while loop

    
    }

/*        printf("\n Display forward");
        Display_forward(left);
        printf("\n Display backward");
        Display_backward(right);    
        
        //------- INSERTING NODE------
       // printf("\nINSERT first ");
        //left = Insert_first(left); // 
        //printf("\nDIPLAYING NODE FORWARD");
        //Display_forward(left);
        //printf("\nDisplayig node backward"); 
        Display_backward(right);
       
       //------ INSERTING LAST NODE--------------
       printf("\nINSERT LAST \n");
       right = Insert_last(right);
       printf("DISPLAYING NODE forward");
       Display_forward(left);
       printf("\n Displaying Node Backward");
        Display_backward(right);
      
    // ----- SEARCH NODE -------- 
    printf("Search Operation : ");
    printf("\n Enter the value to search : ");
    scanf("%d",&value);
    found = Search(right,value);
     if(found== NULL)
        printf("\n Searched item does not exist");
    else 
        printf("NODE FOUND\n");
*/ 
printf("\n INSERT BEFORE");
left = Insert_before(right);            // Right's address wil not be changed ut Left's can be changed if u want to insert before first node
   printf("DISPLAYING NODE forward");
   Display_forward(left);
   printf("\n Displaying Node Backward");
   Display_backward(right);


}
// ------------ FUNCTIONS----------
NODE *Getnode()
{
    NODE* newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    printf("\nEnter Info :");       //Taking info for the node 
    scanf("%d",&newnode->info);         
    
    newnode -> prev = NULL;        // first node has both prev and next = NULL 
    newnode -> next = NULL;
    
    return newnode;
}

void Display_forward(NODE* currptr)
{
    while(currptr != NULL)
    {
        printf("\n%d\n",currptr->info);
        currptr = currptr->next ;

    }
}

void Display_backward(NODE* currptr)
{
    while(currptr != NULL)
    {
        printf("\n%d\n",currptr->info);
        currptr = currptr->prev ;

    }
}

NODE* Insert_first (NODE* currptr)
{
    NODE* newnode;
    newnode=Getnode();
    newnode -> next = currptr;
    currptr -> prev = newnode;
    return newnode;
}

NODE* Insert_last(NODE* currptr)
{
    NODE* newnode;
    newnode = Getnode();
    newnode -> prev = currptr;
    currptr -> next = newnode;
    return newnode;
}

NODE* Search(NODE* currptr,int item)
{
 while(currptr != NULL)
 {
    if(currptr->info == item)
    break;
    else 
    currptr = currptr -> prev;

 }
    return currptr;
}

NODE* Insert_before(NODE* currptr)
{
    int val;
    NODE* loc , *newnode;
    printf("\n Enter info to search: ");
    scanf("%d",&val);   
    loc = Search(currptr , val);        // location and node which is needed to founded and currptr is at last node  
    
    
    
    if (loc!= NULL)             // NODE FOUND
    {
        if (loc-> prev = NULL) // this means the node found is first node 
        newnode  = Getnode();
        newnode -> next = loc;
        loc -> prev = newnode;
        return  newnode;
    }
    else 
    {
        
    }
    


}