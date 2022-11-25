#include "main.h"

node *createList(void)
{
	
node *head, *buf;
node *first;
node *second;
node *third;

/* Allocate memory */
first = malloc(sizeof(struct node));
second = malloc(sizeof(struct node));
third = malloc(sizeof(struct node));

if(first == NULL)
	printf("failed\n");


/* store address of the first node in head */
head = first;

/* Assign data values */
first->data = 75;
second->data = 85;
third->data = 100;


/* linking our nodes */
first->next = second;
first->prev = NULL;

second->next = third;
second->prev = first;

third->next = NULL;
third->prev = second;

buf = head;
printf("===After creating list===\n");
printf("%d\n", buf->data);
	while(buf->next != NULL)
        {
                buf = buf->next;
                printf("%d\n", buf->data);
        }

return (head);
}
