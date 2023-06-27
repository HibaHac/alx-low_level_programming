<<<<<<< HEAD
=======
#include "main.h"
>>>>>>> 8006de0c959ecc64a8dcdf77c73aadd0a1608bb2
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
