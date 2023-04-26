/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/******************************* API: Stack Array Based Implementation *************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "STD_Types.h"
#include "StackArrayBasedImplementation.h"

Stack_t Stack_Initialization (Stack* StackArray)
{
    StackArray->Top = -1;

    return Stack_ValidOperation;
}

Stack_t Stack_Push (Stack* StackArray, u32 u32Data)
{
    if (StackArray->Top == (Stack_MaxLength-1))
        return Stack_IsFull;
        
    StackArray->Top ++;
    StackArray->Stack_Array[StackArray->Top] = u32Data;

    return Stack_ValidOperation;
}

Stack_t Stack_Pop (Stack* StackArray)
{
    if (StackArray->Top == -1)
        return Stack_IsEmpty;

    StackArray->Top -= 1;

    return Stack_ValidOperation;
}

Stack_t Stack_CheckEmpty (Stack* StackArray)
{
    if (StackArray->Top == -1)
        return Stack_IsEmpty;

    return Stack_IsNotEmpty;
}

Stack_t Stack_CheckFull (Stack* StackArray)
{
    if (StackArray->Top == (Stack_MaxLength-1))
        return Stack_IsFull;

    return Stack_IsNotFull;
}

u32 Stack_GetLength (Stack* StackArray)
{
    u32 length = 0;
    for (int i = 0; i <= StackArray->Top; i++ )
    {
        length++;
    }
    return length;
}

Stack_t Stack_Print (Stack* StackArray)
{
    if (StackArray->Top == -1)
        return Stack_IsEmpty;

    for (int i = 0; i <= StackArray->Top; i++ )
    {
        if (i == StackArray->Top)
        {
            printf("%lu", StackArray->Stack_Array[i]);
            return Stack_ValidOperation;
        }

        printf("%lu -> ", StackArray->Stack_Array[i]);
    }
}
