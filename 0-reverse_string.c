#include "main.h"
#include <string.h>

/**
 * rev_str - reverses the string passed into it.
 *
 * @str: input string we want to reverse
 *
 * Return: String Value
 */
char *rev_str(char *str)
{
	int len = strlen(str), i = 0;
	char tmp;
	
	if (str == NULL)
	{
		return NULL;
	}
	while (i < len / 2)
	{
		tmp = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}
