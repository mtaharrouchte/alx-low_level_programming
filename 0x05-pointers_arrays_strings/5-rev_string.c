#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* rev_string - reverted input string
* @s: pointer to string to revert
* Return: Always 0.
*/
void rev_string(char *s)
{
	const char *null_ptr_err = "NULL PTR EXCEPTION";
	const int s_size = strlen(s);
	char *rev_s = (char *) malloc(s_size);

	if (s != NULL && rev_s != NULL)
	{
		int index = 0;

		while (index < s_size * 2)
		{
			if (index < s_size)
			{
				*(rev_s + index) = *(s + s_size - index - 1);
			}
			else
			{
				*(s + (index % s_size)) = *(rev_s + (index % s_size));
			}

			index += 1;
		}
	}
	else
	{
		puts(null_ptr_err);
	}
}
