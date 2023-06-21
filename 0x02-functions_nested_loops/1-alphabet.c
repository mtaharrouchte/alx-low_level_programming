#define MAX_CHAR 27
#include "main.h"

/**
 * print_alphabet - print in lower case all alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{

	char charCount = 0u;
	char *string_ptr = "abcdefghijklmnopqrstuvwxyz\n";

	while (charCount++ < MAX_CHAR)
	{
		_putchar(*(string_ptr + charCount - 1));
	}

}

