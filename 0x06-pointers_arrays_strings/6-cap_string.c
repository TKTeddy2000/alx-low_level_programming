/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
 */

char *cap_string(char *s)
{
	int a = 0;

	/*iterate through our array values*/
	while (s[a] != '\0')
	{
		/*check for any lowercase letters*/
		if (s[a] >= 97 && s[a] <= 122)
		{
			/**
			 * if we have a null character
			 * change its value to capital
			 */
			if (a == 0)
			{
				s[a] -= 32;
			}
			/**
			 * if we find any character matching the below before any small
			 * letter we change that value to a capital letter.
			 */
			if (s[a - 1] == 32 || s[a - 1] == 9 || s[a - 1] == 10 ||
				s[a - 1] == 44 || s[a - 1] == 59 || s[a - 1] == 46 ||
				s[a - 1] == 33 || s[a - 1] == 63 || s[a - 1] == 34 ||
				s[a - 1] == 40 || s[a - 1] == 41 || s[a - 1] == 123 ||
				s[a - 1] == 124)
			{
				s[a] -= 32;
			}
		}
		a++;
	}
	return (s);
}
