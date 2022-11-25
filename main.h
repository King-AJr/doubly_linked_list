#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node node;

node *createList(void);
void insertMid(node **head);
void insertAtEnd(node **head);
void updateNode(node **head);
void reverseList(node **head);
void insert_at_beginning(node** head);
void deleteNode(node **head);
void printlist(node **head);
