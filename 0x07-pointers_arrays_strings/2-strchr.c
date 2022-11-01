#include "main.h"

/**
 * _strchar - locates a character in a string
 * @s: string to be searched
 * @c: character to br located
 * Return: if c is found - a pointer to the first occurence else null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
