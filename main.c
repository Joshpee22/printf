#include <limits.h>
#include <stdio.h>
<<<<<<< HEAD
#include "main.h"
=======
#include "header.h"
>>>>>>> fb361b5b04fef61e211cba2d765edae8d550ce37

/**
 * main - Entry point
 *
 * Return: Always 0
 */
<<<<<<< HEAD
=======

>>>>>>> fb361b5b04fef61e211cba2d765edae8d550ce37
int main(void)
{
	int len;
	int len2;
<<<<<<< HEAD
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
=======

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
>>>>>>> fb361b5b04fef61e211cba2d765edae8d550ce37
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
<<<<<<< HEAD
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%%r]\n");
=======

>>>>>>> fb361b5b04fef61e211cba2d765edae8d550ce37
	return (0);
}
