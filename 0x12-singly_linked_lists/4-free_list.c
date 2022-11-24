#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list
 * @head: start of the linked list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
