#include "main.h"

/**
 * print_unsigned_caps - prints unsigned(hex)int in uppercase base
 * @n: the unsigned int to be printed in a certain base
 * @base_num: this is base @n would be converted & printed in
 * Return: number of char printed after conversion
 */

int print_unsigned_caps(unsigned int n, int base_num)
{
	int char_count = 0;
	char *possible_digits = "0123456789ABCDEF";

/* changes base number to be positive where negative */
	base_num = (unsigned int)base_num;

	if (n / base_num)
		char_count += print_unsigned_caps((n / base_num), base_num);

	_putchar(possible_digits[n % base_num]);
	char_count++;

	return (char_count);

}
