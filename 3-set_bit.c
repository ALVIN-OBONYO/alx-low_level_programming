#include "main.h"
/**
 *set_bit - get bit by an index
 *@n: number
 *@index: index
 *Return: 1, 0 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check =  1;

	if (index > sizeof(n) * 4)
		return (-1);
	check <<= index;
	*n = *n | check;
	return (1);
}
