/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/************************** API: Stack LinkedList Based Implementation *************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#ifndef STACK_LinkedList_BASED_IMPLEMENTATION_H_
#define STACK_LinkedList_BASED_IMPLEMENTATION_H_

/** Function's Return Values **/
typedef enum
{
    Stack_ValidOperation,
	Stack_InValidOperation,
    Stack_AlreadyExist,
    Stack_IsEmpty,
    Stack_IsNotEmpty
} Stack_t;

/** Stack Structure **/
typedef struct _Stack_
{
} Stack;

/** Stack Interface **/
Stack_t Stack_Initialization (Stack* StackList);
Stack_t Stack_Push (Stack* StackList, u32 u32Data);
Stack_t Stack_Pop (Stack* StackList);
Stack_t Stack_CheckEmpty (Stack* StackList);
u32 Stack_GetLength (Stack* StackList);
Stack_t Stack_Print (Stack* StackList);

#endif
