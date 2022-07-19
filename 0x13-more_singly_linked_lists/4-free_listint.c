#include "lists.h"

/**
* free_listint - Function that frees a list
*@head: head of the list
*Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
