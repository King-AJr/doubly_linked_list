#include "main.h"

void insertMid(node **head)
{
	node *new_node, *temp, *buf;
	int i;

	new_node = malloc(sizeof(node));
	if(new_node == NULL)
		printf("failed");
	new_node->data = 23;
	
	temp = *head;
	temp = temp->next;
	
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp->next->prev = new_node;
	
	buf = *head;
	
	printf("===After inserting mid===\n");
	printf("%d\n", buf->data);
        while (buf->next != NULL)
        {
                buf = buf->next;

                printf("%d\n", buf->data);
        }
}
