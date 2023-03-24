#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: return 0 if success and 1 in case we face a null string.
 */
int main(void)
{
	
	char str[] = "Hello, world!";
	char *result = rev_str(str);

	if (result == NULL)
	{
		printf("Error: NULL string pointer.\n");
		return (1);
	}
	printf("%s\n", "Hello, world!");
	printf("%s\n", result);
	return (0);
}
