#include "main.h"

/**
 * print_unsigned_bases - printing unsigned int in given base
 * @n: the unsigned int to be printed in a certain base
 * @base_num: this is base @n would be converted & printed in
 * Return: number of char printed after conversion
 */

int print_unsigned_bases(unsigned int n, int base_num)
{
	int print_count = 0;
	char *possible_digits = "0123456789abcdef";

/* changes base number to be positive in c+ase it's a negative */

	base_num = (unsigned int) base_num;

	if (n / base_num)
		print_count += print_unsigned_bases((n / base_num), base_num);

	_putchar(possible_digits[n % base_num]);
	print_count++;

	return (print_count);

}
