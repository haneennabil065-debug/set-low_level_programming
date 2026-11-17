#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to scan
 * @accept: the allowed bytes
 *
 * Return: number of initial bytes of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;
	int found;

	while (*s != '\0')
	{
		found = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}

	return (count);
}
