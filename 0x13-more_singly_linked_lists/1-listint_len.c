/*
 * File: 1-listint_len.c
 * Auth: Michael Joseph
 */

#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *top;
	unsigned int cr = 0;

	top = h;
	while (top)
	{
		cr++;
		top = top->next;
	}
	return (cr);
}
