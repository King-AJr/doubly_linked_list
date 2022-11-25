#include "main.h"

void insert_at_beginning(node** head)
{
    // allocate memory for new_node
    node* new_node, *buf;

    new_node = malloc(sizeof(struct node));

    // assign data to newNode
    new_node->data = 500;

    // point next of new_node to the first node of the doubly linked list
    new_node->next = (*head);

    // point prev to NULL
    new_node->prev = NULL;

    // point previous of the first node (now the first node is the second node) to new_node
    if ((*head) != NULL)
        (*head)->prev = new_node;

    // head points to newNode
    (*head) = new_node;
    buf = *head;
    printf("=== After inserting at the start ====\n");
        printf("%d\n", buf->data);
        while (buf->next != NULL)
        {
                buf = buf->next;

                printf("%d\n", buf->data);
        }
}
