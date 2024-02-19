/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/************************** API: Stack LinkedList Based Implementation *************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "STD_Types.h"
#include "SingleLinkedList.h"
#include "StackLinkedListBasedImplementation.h"

Stack_t Stack_Initialization (Stack* StackList)
{
    SingleLinkedList_Initialization (StackList);
}

Stack_t Stack_Push (Stack* StackList, u32 u32Data)
{
    if(SingleLinkedList_InsertAtEnd (StackList, u32Data));
		return Stack_ValidOperation;

	return Stack_InValidOperation;
}

Stack_t Stack_Pop (Stack* StackList)
{
    if (Stack_GetLength (StackList) == SingleLL_IsEmpty)
        return Stack_IsEmpty;

    SingleLinkedList_DeleteFromEnd (StackList);

    return Stack_ValidOperation;
}

Stack_t Stack_CheckEmpty (Stack* StackList)
{
    if (!Stack_GetLength(StackList))
        return Stack_IsEmpty;

    return Stack_IsNotEmpty;
}

u32 Stack_GetLength (Stack* StackList)
{
    SingleLinkedList_GetLength (StackList);
}

Stack_t Stack_Print (Stack* StackList)
{
    SingleLinkedList_Print (StackList);
}
