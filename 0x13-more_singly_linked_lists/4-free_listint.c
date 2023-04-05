/*
 * File: 4-free_listint.c
 * Auth: Michael Joseph
 */

#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *abc;

	while (head)
	{
		abc = head->next;
		free(head);
		head = abc;
	}
}
