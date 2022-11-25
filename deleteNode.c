#include "main.h"

void deleteNode(node **head)
{
    node *ptr, *temp, *buf;
    int val;
    temp = *head;
    val = 75;
    while(temp -> data != val)
    	temp = temp -> next;
    if(temp -> next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if(temp -> next -> next == NULL)
    {
        temp ->next = NULL;
    }
    else
    {
        ptr = temp -> next;
        temp -> next = ptr -> next;
        ptr -> next -> prev = temp;
        free(ptr);
    }
}
