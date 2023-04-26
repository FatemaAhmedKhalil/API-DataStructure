/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/*************************** API: Circular Queue Array Based Implementation ********************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#ifndef CIRCULAR_QUEUE_ARRAY_BASED_IMPLEMENTATION_H_
#define CIRCULAR_QUEUE_ARRAY_BASED_IMPLEMENTATION_H_

/** Function's Return Values **/
typedef enum
{
    CircularQueue_ValidOperation,
    CircularQueue_AlreadyExist,
    CircularQueue_IsFull,
    CircularQueue_IsEmpty,
    CircularQueue_IsNotFull,
    CircularQueue_IsNotEmpty
} CircularQueue_t;

/** Circular Queue Structure **/
#define  CircularQueue_MaxLength   7

typedef struct _CircularQueue_
{
    u32 CircularQueue_Array[CircularQueue_MaxLength];
    u32 Front;
    u32 Rear;
} CircularQueue;

/** Circular Queue Interface **/
CircularQueue_t CircularQueue_Initialization (CircularQueue* CircularQueueArray);
CircularQueue_t CircularQueue_Push (CircularQueue* CircularQueueArray, u32 u32Data);
CircularQueue_t CircularQueue_Pop (CircularQueue* CircularQueueArray);
CircularQueue_t CircularQueue_CheckEmpty (CircularQueue* CircularQueueArray);
CircularQueue_t CircularQueue_CheckFull (CircularQueue* CircularQueueArray);
u32 CircularQueue_GetLength (CircularQueue* CircularQueueArray);
CircularQueue_t CircularQueue_Print (CircularQueue* CircularQueueArray);

#endif
