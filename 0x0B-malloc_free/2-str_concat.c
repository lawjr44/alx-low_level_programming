#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	size_t s1_len;
	size_t s2_len;
	size_t total_len;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	total_len = s1_len + s2_len + 1;

	new_str = malloc(total_len);

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, s2_len);

	new_str[total_len - 1] = '\0';

	return (new_str);
}


