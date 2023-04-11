/*
 * File:0-binary_to_uint.c
 * Auth: Michael Joseph
 */

#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int m_tc = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		m_tc = 2 * m_tc + (b[a] - '0');
	}
	return (m_tc);
}
