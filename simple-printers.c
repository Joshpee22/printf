#include "main.h"

/**
 * print_from_to - prints a range of addressess
 * @start: star address
 * @stop: stop address
 * @except: except address
 *
 * Return: number of  bytes printed
 */
int print_from_to(char *start, char *stop, char *except)
{
	int summation = 0;

	while (start <= stop)
	{
		if (start != except)
			summation += _putchar(*start);
		start++;
	}
	return (summation);
}

/**
 * print_rev - reverse print strings
 * @ap: string
 * @params: the parameters
 *
 * Return: number bytes printed
 */
int print_rev(va_list ap, params_t *params)
{
	int len, summation = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			summation += _putchar(*str);
	}
	return (summation);
}

/**
 * print_rot13 - prints string in rot13
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printed
 */
int print_rot13(va_list ap, params_t *params)
{
	int j, index;
	int count = 0;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	j = 0;
	index = 0;
	while (a[j])
	{
		if ((a[j] >= 'A' && a[j] <= 'Z')
		    || (a[j] >= 'a' && a[j] <= 'z'))
		{
			index = a[j] - 65;
			count += _putchar(arr[index]);
		}
		else
			count += _putchar(a[j]);
		j++;
	}
	return (count);
}
