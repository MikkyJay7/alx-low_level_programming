/*
* File: 100-get_endianness.c
* Auth: Michael Joseph
*/

#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *u = (char *) &a;

	return (*u);
}
