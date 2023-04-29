/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/************************************ API: Single Linked List **********************************/
/*************************************** Date: 28/4/2023 ***************************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#ifndef SINGLE_LINKED_LIST_H_
#define SINGLE_LINKED_LIST_H_

/** Function's Return Values **/
typedef enum
{
    SingleLL_ValidOperation,
    SingleLL_InValidOperation,
    SingleLL_InValidIndex,
    SingleLL_IsEmpty
} SingleLL_t;

/** Single Linked List Structure **/
typedef struct _SingleLLNode_ Node;
struct _SingleLLNode_
{
    u32 Data;
    Node* Next;
};

typedef struct _SingleLL_
{
    Node* Head;
    Node* Tail;
    u32 Size;
} SingleLL;

/** Single Linked List Interface **/
SingleLL_t SingleLinkedList_Initialization (SingleLL* List);

SingleLL_t SingleLinkedList_InsertAtBegining (SingleLL* List, u32 u32Data);
SingleLL_t SingleLinkedList_InsertAtEnd (SingleLL* List, u32 u32Data);
SingleLL_t SingleLinkedList_InsertAtnthIndex (SingleLL* List, u32 u32Data, u32 u32Index);

SingleLL_t SingleLinkedList_DeleteFromBegining (SingleLL* List);
SingleLL_t SingleLinkedList_DeleteFromEnd (SingleLL* List);
SingleLL_t SingleLinkedList_DeleteFromnthIndex (SingleLL* List, u32 u32Index);

SingleLL_t SingleLinkedList_GetHeadData (SingleLL* List);
SingleLL_t SingleLinkedList_GetTailData (SingleLL* List);
SingleLL_t SingleLinkedList_GetIndexData (SingleLL* List, u32 u32Index);

u32 SingleLinkedList_GetLength (SingleLL* List);

SingleLL_t SingleLinkedList_Print (SingleLL* List);

#endif
