#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "STD_Types.h"
#include "SingleLinkedList.h"

int main()
{
    SingleLL List;
    SingleLinkedList_Initialization (&List);
    SingleLinkedList_InsertAtEnd (&List, 2);
    SingleLinkedList_InsertAtEnd (&List, 3);
    SingleLinkedList_InsertAtEnd (&List, 5);
    SingleLinkedList_InsertAtBegining(&List, 1);
    SingleLinkedList_InsertAtnthIndex(&List, 4, 4);
    //SingleLinkedList_DeleteFromnthIndex(&List, 2);
    SingleLinkedList_DeleteFromnthIndex(&List, 4);
    //SingleLinkedList_DeleteFromEnd (&List);
    //printf("%lu\n",SingleLinkedList_DeleteFromBegining (&List));
    //printf("%lu\n",SingleLinkedList_DeleteFromEnd (&List));
    printf("%lu\n", SingleLinkedList_GetLength (&List));
    SingleLinkedList_GetIndexData (&List,4);
    printf("\n");
    SingleLinkedList_GetHeadData (&List);
    printf("\n");
    SingleLinkedList_Print (&List);

    return 0;
}
