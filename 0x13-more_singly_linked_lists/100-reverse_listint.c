/*
 * File: 100-reverse_listint.c
 * Author: Michael Joseph
 */

/*
 * File: 100-reverse_listint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}

	(*head)->next = back;

	return (*head);
}
