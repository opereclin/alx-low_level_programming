#include "main.h"

/**
* print_alphabet_x10 - prints alphabet ten times
*
*/
void print_alphabet_x10(void)
{
	int c;
	int x;

	for (c = 0 ; c < 10 ; c++)
	{
		for (x = 97 ; x <= 122 ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
