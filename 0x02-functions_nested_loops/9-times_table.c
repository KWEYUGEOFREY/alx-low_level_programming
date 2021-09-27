#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
(*
 * Return: Nothing.
 */
void times_table(void)
{
	int row, col, res;

	for (row = 0; row <= 9; i++)
	{
		for (col = 0; col <= 9; j++)
		{
			res = (row * col);
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
