#include <stdio.h>
/**
 *main - Entry point
 *Discription: 'print digit number of base 10 using putchar'
 *Return: always 0
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
