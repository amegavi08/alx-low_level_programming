#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: input string.
* Return: the pointer to dest.
*/

char *cap_string(char *s)
{
	int count1 = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count1) >= 97 && *(s + count1) <= 122)
		*(s + count1) = *(s + count1) - 32;
	count1++;

	while (*(s + count1) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count1) == sep_words[i])
			{
				if ((*(s + (count1 + 1)) >= 97) && (*(s + (count1 + 1)) <= 122))
					*(s + (count1 + 1)) = *(s + (count1 + 1)) - 32;
				break;
			}
		}
		count1++;
	}
	return (s);

}
