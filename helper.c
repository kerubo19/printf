#include "main.h"

/**
 * print_string - prints a string
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		if (s[i] == '\0')
		{
			_putchar('\\');
			_putchar('0');
		}
		else
			_putchar(s[i]);
		i++;
	}
	return (i);
}
