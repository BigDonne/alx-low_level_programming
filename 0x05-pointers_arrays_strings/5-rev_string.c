#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
