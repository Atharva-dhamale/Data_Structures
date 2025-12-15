
//Write a program which display addition of digits of element from singly linear linked list

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

void SumDigit(PNODE Head)
{
   

    while(Head!=NULL)
    {
        int Digit=0;
        int No=0;
        int iSum=0;

        while(Head->Data!=0)
        {
            Digit=Head->Data%10;
            iSum+=Digit;
            Head->Data=Head->Data/10;
        }
        Head = Head->Next; 

        printf("%d ",iSum);
    }
    printf("\n");
}
int main()
{
    
    PNODE First=NULL;
    
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);
    

    SumDigit(First);
    
   

    return 0;
}