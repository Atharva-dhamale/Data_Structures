
//Write a program which displays all element which are perfect from singly linear linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->Next=NULL;
    newn->Data=no;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->Next=*Head;
        *Head=newn;
    }
}

void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("| %d |->",Head->Data);
        Head=Head->Next;
    }
    printf("NULL\n");
}
void DisplayPerfect(PNODE Head)
{
    
    
    

    while(Head!=NULL)
    {
        int iValue=Head->Data;
        int iFact=0;
        
        if(iValue>1)
        {
            iFact=1;
            int i=0;

            for (i = 2; i < iValue; i++)
            { 
                if (iValue % i == 0) 
                {
                    iFact += i;
                }
            }
            if (iFact == iValue)
            {
                printf("%d\n", iValue);
            }
            
        }
        Head = Head->Next;
        
        
        
    }
    
}
int main()
{

    PNODE First=NULL;
    
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);
    

    DisplayPerfect(First);
   

    return 0;
}