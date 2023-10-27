#include "main.h"

/**
 * _memcpy -copies the memory area
 * @dest: bytes to be copied to
 * @src: where the bytes are coming from
 * @n: the function that is copying
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}