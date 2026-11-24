

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to accept
 *
 * Return: the number of bytes in the initial segment of s
 *         containing only characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			return (count);

		count++;
	}

	return (count);
}
