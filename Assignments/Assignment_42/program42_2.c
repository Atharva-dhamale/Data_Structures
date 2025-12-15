
//Write a program which searches last occurence of particular element from singly linked list
//Function should return position at which element is found

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
int SearchLastOcc(PNODE Head,int iNo)
{
    int iCnt=0;
    iCnt=1;

    int iCount=0;

    while(Head!=NULL)
    {
        if((Head->Data)==iNo)
        {
            iCount=iCnt;
        }
        iCnt++;
        Head=Head->Next;
    }
    return iCount;
    
}
int main()
{
    int iRet=0;
    int iValue=0;

    PNODE First=NULL;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    printf("Enter the element:\n");
    scanf("%d",&iValue);

    iRet=SearchLastOcc(First,iValue);
    printf("Last Occurence is :%d\n",iRet);

    return 0;
}