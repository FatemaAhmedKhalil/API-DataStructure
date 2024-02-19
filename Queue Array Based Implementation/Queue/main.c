#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "STD_Types.h"
#include "CircularQueueArrayBasedImplementation.h"

int main()
{
    CircularQueue arr;
    CircularQueue_Initialization (&arr);
    CircularQueue_Push (&arr, 0);
    CircularQueue_Push (&arr, 1);
    CircularQueue_Push (&arr, 2);
    CircularQueue_Push (&arr, 3);
    CircularQueue_Push (&arr, 4);
    CircularQueue_Push (&arr, 5);
    CircularQueue_Push (&arr, 6);
    CircularQueue_Pop (&arr);
    CircularQueue_Pop (&arr);
    CircularQueue_Pop (&arr);
    CircularQueue_Push (&arr, 9);
    CircularQueue_Push (&arr, 10);
    CircularQueue_Pop (&arr);
    CircularQueue_Push (&arr, 11);
    CircularQueue_Push (&arr, 12);
    printf("%d\n", CircularQueue_GetLength(&arr) );
    CircularQueue_Print (&arr);
    return 0;
}
