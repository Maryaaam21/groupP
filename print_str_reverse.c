#include "main.h"

/**
 * print_str_reverse - this is prints strings in reverse
 * @strings: pointer to first char in the string
 * Return: total number of character printed in reverse
 */

int print_str_reverse(char *strings)
{
	int printed_count = 0;
	int len, i;

	if (strings == NULL)
		return (printed_count);

/* counting the string length needed to print strings backward */

	for (len = 0; strings[len]; len++)
		;
/* actual printing of strings in reverse */

	for (i = len - 1; i > -1; i--)
	{
		_putchar(strings[s]);
		printed_count++;
	}

	return (printed_count);
}
