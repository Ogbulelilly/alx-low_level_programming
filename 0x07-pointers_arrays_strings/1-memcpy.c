#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: The number of bytes to copy from @src
 * Return: Always 0 (Success)
 */
 char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

 
