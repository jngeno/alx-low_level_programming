#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of bytes in s which consists of inly bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
