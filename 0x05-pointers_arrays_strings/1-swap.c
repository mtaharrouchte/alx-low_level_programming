#include <stdio.h>
#include "main.h"

/**
* swap_int - swap two numbers integer
* @a:  pointer to integer a
* @b:  pointer to integer b
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
