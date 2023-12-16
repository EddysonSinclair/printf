#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
		;
	return (n);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenk(const char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
		;
	return (n);
}
