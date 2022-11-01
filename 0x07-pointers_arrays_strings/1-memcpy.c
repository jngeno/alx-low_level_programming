#include "main.h"

/**
 * _memcpy - copies @n bytes
 * @dest: pointer to the memory area to be copied
 * @src: source buffer to copy characters from
 * @n: numbers of bytes
 * Return: Pointer to the destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;


	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
