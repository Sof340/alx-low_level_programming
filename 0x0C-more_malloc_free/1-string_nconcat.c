#include "main.h"

/*
 * *string_nconcat - returns a pointer
 * @ @s1: first bytes of the memory
 * @s2: first bytes of the memory
 * @n: first bytes of the memory
 * Return: pointer to the resulting string dests
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, i = 0 , k = 0, f = 0;
	char *s;
	
	while (s1 && s1[i])
		i++;

	while (s2 && s2[j])
		j++;

	if ( n >= j)
		n = j;
	s = malloc(sizeof(char) * (n + i + 1));
	if (s == NULL)
		return (NULL);

	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}
	
	while (k < n + i)
	{
		s[k] = s2[f];
		k++;
		f++;
	}
	s[k] = '\0';
	return (s);
}
