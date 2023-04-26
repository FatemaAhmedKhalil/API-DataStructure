/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/*************************** API: Circular Queue Array Based Implementation ********************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "STD_Types.h"
#include "CircularQueueArrayBasedImplementation.h"

CircularQueue_t CircularQueue_Initialization (CircularQueue* CircularQueueArray)
{
    CircularQueueArray->Front = -1;
    CircularQueueArray->Rear = -1;

    return CircularQueue_ValidOperation;
}

CircularQueue_t CircularQueue_Push (CircularQueue* CircularQueueArray, u32 u32Data)
{
    if (CircularQueueArray->Front < CircularQueueArray->Rear)
    {
        if ( ((CircularQueueArray->Rear)-(CircularQueueArray->Front)+1) == CircularQueue_MaxLength )
            return CircularQueue_IsFull;
    }
    else if (CircularQueueArray->Front > CircularQueueArray->Rear)
    {
        if ( ((CircularQueueArray->Rear)+1)%CircularQueue_MaxLength == CircularQueueArray->Front )
            return CircularQueue_IsFull;
    }

    if (CircularQueueArray->Front == -1)
        CircularQueueArray->Front = 0;

    CircularQueueArray->Rear = ((CircularQueueArray->Rear)+1)%CircularQueue_MaxLength;
    CircularQueueArray->CircularQueue_Array[CircularQueueArray->Rear] = u32Data;

    return CircularQueue_ValidOperation;
}

CircularQueue_t CircularQueue_Pop (CircularQueue* CircularQueueArray)
{
    if (CircularQueueArray->Rear == -1 && CircularQueueArray->Front == -1)
        return CircularQueue_IsEmpty;

    if (CircularQueueArray->Rear == CircularQueueArray->Front) // if Remaining Just One Element
    {
        CircularQueueArray->Front = -1;
        CircularQueueArray->Rear = -1;
        return CircularQueue_ValidOperation;
    }

    CircularQueueArray->Front++;

    return CircularQueue_ValidOperation;
}

CircularQueue_t CircularQueue_CheckEmpty (CircularQueue* CircularQueueArray)
{
    if (CircularQueueArray->Rear == -1 && CircularQueueArray->Front == -1)
        return CircularQueue_IsEmpty;

    return CircularQueue_IsNotEmpty;
}

CircularQueue_t CircularQueue_CheckFull (CircularQueue* CircularQueueArray)
{
    if (CircularQueueArray->Front < CircularQueueArray->Rear)
    {
        if ( ((CircularQueueArray->Rear)-(CircularQueueArray->Front)+1) == CircularQueue_MaxLength )
            return CircularQueue_IsFull;
    }
    else if (CircularQueueArray->Front > CircularQueueArray->Rear)
    {
        if ( ((CircularQueueArray->Rear)+1)%CircularQueue_MaxLength == CircularQueueArray->Front )
            return CircularQueue_IsFull;
    }

    return CircularQueue_IsNotFull;
}

u32 CircularQueue_GetLength (CircularQueue* CircularQueueArray)
{
    u32 length = 0;

    int i;
    for (i = CircularQueueArray->Front; i != CircularQueueArray->Rear; i = (i+1)%CircularQueue_MaxLength )
        length++;
    if (i == CircularQueueArray->Rear)
        length++;

    return length;
}
CircularQueue_t CircularQueue_Print (CircularQueue* CircularQueueArray)
{
    if (CircularQueueArray->Rear == -1 && CircularQueueArray->Front == -1)
        return CircularQueue_IsEmpty;

    int i;
    for (i = CircularQueueArray->Front; i != CircularQueueArray->Rear; i = (i+1)%CircularQueue_MaxLength )
        printf("%lu -> ", CircularQueueArray->CircularQueue_Array[i]);

        if (i == CircularQueueArray->Rear)
        {
            printf("%lu", CircularQueueArray->CircularQueue_Array[i]);
            return CircularQueue_ValidOperation;
        }
}

