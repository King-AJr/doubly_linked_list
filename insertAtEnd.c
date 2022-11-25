#include "main.h"

void insertAtEnd(node **head)
{
	node *new_node, *temp, *buf;

	new_node = malloc(sizeof(node));
	new_node->data = 136;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	buf = *head;
	
	printf("=== After inserting at the end ====\n");
	printf("%d\n", buf->data);
	while (buf->next != NULL)
	{
		buf = buf->next;
		
		printf("%d\n", buf->data);
	}
}
