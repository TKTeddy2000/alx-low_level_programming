/**
 * _strspn - a function that get
 *           length of prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		z = 1;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z = 0;
				break;
			}
			y++;
		}
		if (z == 1)
			break;
		x++;
	}

	return (x);
}
