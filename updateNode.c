#include "main.h"

void updateNode(node **head)
{

	node *temp, *buf;
	int i;

	temp = *head;
	for (i = 0; i < 2; i++)
	{
        	temp = temp->next;
        	if(temp == NULL)
			return;
	}
	temp->data = 36;
	buf = *head;
	printf("=== After update ====\n");
        printf("%d\n", buf->data);
        while (buf->next != NULL)
        {
                buf = buf->next;
                                                                           printf("%d\n", buf->data);
        }
}
