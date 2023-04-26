#include "header.h"

void print_buffer(char buffer[], int *buff_ind);

/**
<<<<<<< HEAD
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
=======
 * _printf : function
 * @*format : format
>>>>>>> fb361b5b04fef61e211cba2d765edae8d550ce37
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
=======
	unsigned h = 0, r_value = 0;
	va_list args;
	va_start(args, format);

	for ( ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			putchr(format[h]);
		}
		else if (format[h+1] == 'c')
		{
			putchr(va_arg(args, int));
			h++;
		}
		else if (format[h+1] == 's')
		{
			int r_val = put_s(va_arg(args, char *));
			h++;
			r_value += (r_val - 1);
		}
		else if (format[h+1] == '%')
		{
			putchr('%');
			h++;
		}
		r_value += 1;
	}
	return (r_value);
>>>>>>> fb361b5b04fef61e211cba2d765edae8d550ce37
}
