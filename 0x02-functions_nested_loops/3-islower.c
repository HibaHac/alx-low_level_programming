#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: check character
 * Return: 1 for lowercase charachter or 0 for anything else
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
