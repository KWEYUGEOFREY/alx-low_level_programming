#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	
	return (0);

}
