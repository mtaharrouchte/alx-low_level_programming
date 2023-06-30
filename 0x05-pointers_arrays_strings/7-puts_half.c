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
	int half_size = 0;
	char *half = NULL;

	if (str != NULL)
	{
		half_size = strlen(str) / 2;
		half = str + half_size;
		puts(half);
	}
	else
	{
		puts(EXCEPTION_ERR);
		exit(0);
	}
}

