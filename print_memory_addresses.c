#include "main.h"

/**
 * print_mem_address - prints hex address stored in *ptr
 * @the_ptr: pointer variable whose content we are to print
 * Return: number of characters printed this function
 */
int print_mem_address(void *the_ptr)
{
	int hex_digits = 0;
	int index;
	int printed_count = 0;
	unsigned long int address = (unsigned long int)the_ptr;
	unsigned long int temp = address;
	char *digits = "0123456789abcdef";


/* since all memory addrs start with 0x, we printed it so as seen below */

	_putchar('0');
	_putchar('x');
	printed_count += 2;

	if (temp == 0)
		hex_digits = 1;
	else
	{
		while (temp)
		{
			hex_digits++;
			temp >>= 4;
		}
	}

	for (index = (hex_digits - 1); index > -1; index--)
	{
		char d = digits[(address >> (4 * index)) & 0xf];

		_putchar(d);
		printed_count++;
	}

	return (printed_count);
}
