/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal
 *        negative integer if the stopping character
 *                in @s1 was less than the stopping
 *                character in @s2
 *        positive integer if the stopping character
 *                in @s1 was greater than the stopping
 *                character in @s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b;

	/**
	 * iterate through src and
	 * compare it with dest
	 */
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (s1[a] != s2[a])
		{
			/*
			 * return the difference between
			 * the two characters
			 */
			b = s1[a] - s2[a];
			break;
		}
		else
		{
			b = s1[a] - s2[a];
		}
		a++;
	}

	return (b);
}
