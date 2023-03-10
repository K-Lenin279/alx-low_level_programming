#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to character
 * Return: *s
 */
char *cap_string(char *s)
{
	int i, j;
	char sep_words[] = "\t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
				for (j = 0; sep_words[j] != '\0'; j++)
					if (s[i] == sep_words[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] -= 32;
	}
	return (s);
}
