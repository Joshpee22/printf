#include "header.h"
/**
 * putchr - writes a char to stout
 * @char - char to be output
 */

int putchr(char z)
{
	return write(1, &z, 1);
}
