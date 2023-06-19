#include<stdio.h>
/**
 * main - Entry point
 * description: 'prints all possible combinations of single-digit numbers'
 * Return: always 0
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		if (m == 57)
		{
			continue;
		}
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
