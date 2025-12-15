
//Write a program which returns addition of all elements from singly linear linked list

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
int Addition(PNODE Head)
{
    int iSum=0;
    

    while(Head!=NULL)
    {
        iSum=iSum+Head->Data;
        Head=Head->Next;
    }
    return iSum;
    
}
int main()
{
    int iRet=0;

    PNODE First=NULL;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    

    iRet=Addition(First);
    printf("Addition of all nodes is: %d\n",iRet);

    return 0;
}