#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * puts_half - print half of string
 * @str: pointer to string
 * Return: Always 0.
*/
void puts_half(char *str)
{
	char *EXCEPTION_ERR = "NULL_POINTER";
	int size = 0;
	char *half = NULL;

	if (str != NULL)
	{
		size = strlen(str);

		if (size % 2 != 0)
		{
			half = (str + (size / 2) + 1);
		}
		else
		{
			half = (str + (size / 2));
		}

		puts(half);
	}
	else
	{
		puts(EXCEPTION_ERR);
		exit(0);
	}
}

