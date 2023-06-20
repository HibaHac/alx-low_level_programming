#include"main.h"
/**
 *print_alphabet_x10 - function prints 10 alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	int z;

	for (z = 97; x <= 10; x++)
	{
		for (z = 97; z <= 122; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
