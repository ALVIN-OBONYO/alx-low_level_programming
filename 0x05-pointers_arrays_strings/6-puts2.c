#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the new string to print
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
