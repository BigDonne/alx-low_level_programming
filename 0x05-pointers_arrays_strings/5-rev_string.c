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
	int 1, i

	char *begin_ptr, *end_ptr, ch;

	1 = strlen(s);

	begin_ptr = s;

	end_ptr = s;

	for (i = 0; i < 1 - 1; i++)
		end_ptr++;

	for (i = 0; i < 1 / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;

		end_ptr++;
	}
}
