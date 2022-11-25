#include "main.h"

int main(void)
{
	node *test;
	test = createList();	
	insert_at_beginning(&test);
	insertAtEnd(&test);
	insertMid(&test);
	updateNode(&test);	
	deleteNode(&test);	
	printlist(&test);
	reverseList(&test);	
	return(0);
}
