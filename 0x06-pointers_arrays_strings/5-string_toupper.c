#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string
* to uppercase.
* @s: input string.
* Return: the pointer to dest.
*/

char *string_toupper(char *s)
{
	int count1 = 0;

	while (*(s + count1) != '\0')
	{
		if ((*(s + count1) >= 97) && (*(s + count1) <= 122))
			*(s + count1) = *(s + count1) - 32;
		count1++;
	}

	return (s);
}
