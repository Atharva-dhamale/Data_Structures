
//Write a program which returns largest element from singly linear linked list

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
int Maximum(PNODE Head)
{
    int iMax=0;
    

    while(Head!=NULL)
    {
        if((Head->Data)>iMax)
        {
            iMax=Head->Data;
        }
        Head=Head->Next;
    }
    return iMax;
    
}
int main()
{
    int iRet=0;

    PNODE First=NULL;

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);
    

    iRet=Maximum(First);
    printf("Largest element is: %d\n",iRet);

    return 0;
}