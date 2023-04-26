/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/******************************* API: Stack Array Based Implementation *************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#ifndef STACK_ARRAY_BASED_IMPLEMENTATION_H_
#define STACK_ARRAY_BASED_IMPLEMENTATION_H_

/** Function's Return Values **/
typedef enum
{
    Stack_ValidOperation,
    Stack_AlreadyExist,
    Stack_IsFull,
    Stack_IsEmpty,
    Stack_ValidForMoreOperation
} Stack_t;

/** Stack Structure **/
#define  Stack_MaxLength   5

typedef struct _Stack_
{
    u32 Stack_Array[Stack_MaxLength];
    u32 Top;
} Stack;

/** Stack Interface **/
Stack_t Stack_Initialization (Stack* StackArray);
Stack_t Stack_Push (Stack* StackArray, u32 u32Data);
Stack_t Stack_Pop (Stack* StackArray);
Stack_t Stack_CheckEmpty (Stack* StackArray);
Stack_t Stack_CheckFull (Stack* StackArray);
u32 Stack_GetLength (Stack* StackArray);
Stack_t Stack_Print (Stack* StackArray);

#endif
