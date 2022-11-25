#include "main.h"

void printlist(node **head)
{
	node *buf;
	buf = *head;
	printf("===After deleting===\n");
        printf("%d\n", buf->data);
        while (buf->next != NULL)
        {
                buf = buf->next;

                printf("%d\n", buf->data);
        }
}
