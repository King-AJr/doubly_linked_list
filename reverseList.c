#include "main.h"

void reverseList(node **head)
{
	node *temp, *buf;
	int i;

	temp = malloc(sizeof(node));
	temp = *head;
	while (temp != NULL)
	{
        	buf = temp->prev;
        	temp->prev = temp->next;
        	temp->next = buf;
        	temp = temp->prev;
	}
	if (buf != NULL)
		*head = buf->prev;
	buf = *head;
	printf("=== After reversing ====\n");
        printf("%d\n", buf->data);
        while (buf->next != NULL)
        {
                buf = buf->next;

                printf("%d\n", buf->data);
        }
}
