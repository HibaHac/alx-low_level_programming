#include"main.h"
/**
 *main - Entry point
 *Description:'function that prints the alphabe in lowercase'
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
