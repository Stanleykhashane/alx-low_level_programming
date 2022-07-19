#include "lists.h"

/**
* pop_listint - Function that deletes the head node od a linked list and
* returns the head node's data(n)
*@head: head of the list
*Return: head node's list, if list is empty 0
*/

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
