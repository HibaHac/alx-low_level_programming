#include"main.h"
<<<<<<< HEAD

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: empty output
 */

void times_table(void);
{
	int x, y, i, j, z;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	i = z % 10;
	j = (z - i) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(j + '0');
	_putchar(i + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
=======
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
>>>>>>> 8006de0c959ecc64a8dcdf77c73aadd0a1608bb2
