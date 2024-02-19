#include <stdio.h>
#include <stdlib.h>

#include "STD_Types.h"
#include "StackArrayBasedImplementation.h"

int main()
{
    Stack arr;
    Stack_Initialization (&arr);
    Stack_Push (&arr, 5);
    Stack_Push (&arr, 6);
    Stack_Push (&arr, 7);
    Stack_Push (&arr, 8);
    Stack_Push (&arr, 9);
    Stack_Push (&arr, 10);
    Stack_Push (&arr, 11);
    Stack_Pop (&arr);
    Stack_Pop (&arr);

    printf("%lu\n",Stack_GetLength (&arr) );
    Stack_Print (&arr);
    //printf("\n%d",Stack_CheckEmpty (&arr) );
    printf("\n%d",Stack_CheckFull(&arr) );

    return 0;
}
