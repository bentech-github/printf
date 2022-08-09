#include "main.h"
#include <stdlib.h>

/**
 * print_ROT - prints a string in rot13
 * @string: string to print
 *
 * Return: number of chars printed
 */

int print_ROT(va_list string)
{
	char *str;
	unsigned int i = 0, j;
	int count = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(string, char *);
	if (!str)
		return (-1);
	while (str[i])
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (alphabet[j] == str[i])
			{
				_putchar(rot13[j]);
				count++;
				break;
			}
		}
		if (!alphabet[j])
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
