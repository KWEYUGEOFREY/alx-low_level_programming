/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 
*int _strlen_recursion(char *s)
*{
*	if (*s == '\0')
*		return (0);
*	s++;
*	return (1 + _strlen_recursion(s));
*}
*/

  
#include "main.h"

/**
 *_strlen_recursion - return the length of string
 *@s: string
 *
 *Return: length
 */

int _strlen_recursion(char *s)
{
int a;

if (*s == '\0')
return (0);

a = _strlen_recursion(s + 1) + 1;
return (a);
}
