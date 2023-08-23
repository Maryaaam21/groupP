#include "main.h"

/**
 * print_integers - this prints int number invoked in it
 * @the_num: variable storing no to be printed when invoked
 * Return: no of characters printed by this function
 */

int print_integers(int the_num)
{
	int printed_count = 0;
	unsigned int n;

/* if neg, this prints negative sign before converting num to positive */
	if (the_num < 0)
	{
		_putchar('-');
		printed_count++;
		n = -(the_num);
	}

	else
		n = the_num;

/* after ensuring num is positive, we print its digits & return the count */

	if (n / 10)
		printed_count += print_integers(n / 10);

	_putchar((n % 10) + '0');
	printed_count++;

	return (printed_count);
}
