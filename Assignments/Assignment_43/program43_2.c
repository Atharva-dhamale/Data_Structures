
//Write a program which displays all element which are prime from singly linear linked list

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
void DisplayPrime(PNODE Head)
{

    while(Head!=NULL)
    {
        int iValue=Head->Data;
        int iPrime=0;
        bool isPrime=true;
        
        if(iValue>1)
        {
            iPrime=1;
            int i=0;

            for (i = 2; i < iValue/2; i++)
            { 
                if (iValue % i == 0) 
                {
                    isPrime=false;
                }
            }

            if(isPrime==true)
            {
                printf("%d ",iValue);
            }
            
        }
        Head = Head->Next;
        
        
        
    }
    printf("\n");
    
}
int main()
{

    PNODE First=NULL;
    
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);
    

    DisplayPrime(First);
   

    return 0;
}