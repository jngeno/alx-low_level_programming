#include "main.h"

/**
 * _memcpy - copies @n bytes
 * @dest: pointer to the memory area to be copied
 * @src: source buffer to copy characters from
 * @n: numbers of bytes
 * Return: Pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;


	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
