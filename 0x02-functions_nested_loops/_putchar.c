#include <unistd.h>


/**
 * _putchar - rites the character c to stdout
 * @c: The character to print
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropiately.
 */

int _putcgar(char c)

{
	return (write(1, &c, 1));
}
