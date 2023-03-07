/**
 * _memcpy - function that copies bytes from memory area
 *
 * @dest: buffer where we will copy to
 * @src: what to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
