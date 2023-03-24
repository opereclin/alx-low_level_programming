#include "main.h"

/**
*_isdigit - checks for a digit i
*@i: input digit
*
*Return: 1 for digit 0 for anything else
*/

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	else
		return (0);
}
