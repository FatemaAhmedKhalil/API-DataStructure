/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/************************************ API: Single Linked List **********************************/
/*************************************** Date: 28/4/2023 ***************************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "STD_Types.h"
#include "SingleLinkedList.h"

SingleLL_t SingleLinkedList_Initialization (SingleLL* List)
{
    List->Head = NULL;
    List->Tail = NULL;
    List->Size = 0;
}

Node *SingleLinkedList_CreateNode (SingleLL* List, u32 u32Data)
{
    Node *NewNode = malloc( sizeof(Node) );

    if (NewNode != NULL)
    {
        NewNode->Next = NULL;
        NewNode->Data = u32Data;
    }
    return NewNode;
}

SingleLL_t SingleLinkedList_InsertAtBegining (SingleLL* List, u32 u32Data)
{
    Node *NewNode = SingleLinkedList_CreateNode (List, u32Data);

    if (NewNode != NULL)
    {
        NewNode->Next = List->Head;

        if (List->Size == 0)
            List->Tail = NewNode;

        List->Head = NewNode;
        (List->Size)++;

        return SingleLL_ValidOperation;
    }

    return SingleLL_InValidOperation;
}

SingleLL_t SingleLinkedList_InsertAtEnd (SingleLL* List, u32 u32Data)
{
    Node *NewNode = SingleLinkedList_CreateNode (List, u32Data);

    if (NewNode != NULL)
    {
        NewNode->Next = NULL;

        if (List->Size == 0)
        {
            List->Head = NewNode;
            List->Tail = NewNode;
            (List->Size)++;
            return SingleLL_ValidOperation;
        }

        List->Tail->Next = NewNode;
        List->Tail = NewNode;
        (List->Size)++;

        return SingleLL_ValidOperation;
    }

    return SingleLL_InValidOperation;
}

SingleLL_t SingleLinkedList_InsertAtnthIndex (SingleLL* List, u32 u32Data, u32 u32Index)
{
    if (u32Index == 1)
    {
        SingleLinkedList_InsertAtBegining (List, u32Data);
        return;
    }
    else if (u32Index == (List->Size)+1)
    {
        SingleLinkedList_InsertAtEnd (List, u32Data);
        return;
    }
    else if (u32Index > 1 && u32Index < (List->Size)+1)
    {
        Node *NewNode = SingleLinkedList_CreateNode (List, u32Data);
        if (NewNode != NULL)
        {
            Node *Temp;
            Temp = List->Head;

            for(int i = 0; i<u32Index-2; i++ )
                Temp = Temp->Next;

            NewNode->Next = Temp->Next;
            Temp->Next = NewNode;
            (List->Size)++;

            return SingleLL_ValidOperation;
        }
    }
    else
        return SingleLL_InValidIndex;

    return SingleLL_InValidOperation;
}

SingleLL_t SingleLinkedList_DeleteFromBegining (SingleLL* List)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    Node *Temp;
    Temp = List->Head;
    List->Head = Temp->Next;
    free(Temp);
    (List->Size)--;

    return SingleLL_ValidOperation;
}

SingleLL_t SingleLinkedList_DeleteFromEnd (SingleLL* List)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    Node *Temp = List->Head;

    int i = 0;
    for (i = 1; i < (List->Size)-1; i++)
        Temp = Temp->Next;

    free(List->Tail);
    List->Tail = Temp;
    List->Tail->Next = NULL;
    (List->Size)--;

    return SingleLL_ValidOperation;
}

SingleLL_t SingleLinkedList_DeleteFromnthIndex (SingleLL* List, u32 u32Index)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    if (u32Index == 1)
    {
        SingleLinkedList_DeleteFromBegining (List);
        return;
    }
    else if (u32Index == List->Size)
    {
        SingleLinkedList_DeleteFromEnd (List);
        return;
    }
    else if (u32Index > 1 && u32Index < List->Size)
    {
        Node *Temp1 = List->Head;
        Node *Temp2;

        int i = 0;
        for (i = 1; i < u32Index-1; i++)
            Temp1 = Temp1->Next;

        Temp2 = Temp1->Next->Next;
        free(Temp1->Next);
        Temp1->Next = Temp2;
        (List->Size)--;

        return SingleLL_ValidOperation;
    }
    else
        return SingleLL_InValidIndex;
}

SingleLL_t SingleLinkedList_GetHeadData (SingleLL* List)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    printf("%lu", List->Head->Data);
    return SingleLL_ValidOperation;
}

SingleLL_t SingleLinkedList_GetTailData (SingleLL* List)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    printf("%lu", List->Tail->Data);
    return SingleLL_ValidOperation;
}

SingleLL_t SingleLinkedList_GetIndexData (SingleLL* List, u32 u32Index)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    if (u32Index >= 1 && u32Index <= List->Size)
    {
        Node *NodeData;
        NodeData = List->Head;

        int i = 0;
        for (i = 1; i < u32Index; i++)
            NodeData = NodeData->Next;

        printf("%lu", NodeData->Data);

        return SingleLL_ValidOperation;
    }
    else
        return SingleLL_InValidIndex;
}

u32 SingleLinkedList_GetLength (SingleLL* List)
{
    int Length = List->Size;
    return Length;
}

SingleLL_t SingleLinkedList_Print (SingleLL* List)
{
    if (List->Size == 0)
        return SingleLL_IsEmpty;

    Node *NodeData;
    NodeData = List->Head;

    int i = 0;
    for (i = 0; i < List->Size; i++)
    {
        if ( NodeData->Next == NULL)
        {
            printf("%lu", NodeData->Data);

            return SingleLL_ValidOperation;
        }

        printf("%lu -> ", NodeData->Data);
        NodeData = NodeData->Next;
    }
}
