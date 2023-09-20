#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 *
 * Return: The pointer to destination string.
 */
char *_strcat(char *dest, const char *src)
{
	int i = 0, j;

	while  (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}


/**
 * _strlen - Count string length.
 * @s: Our string
 *
 * Return: The string length.
 */
int _strlen(const char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: The destination buffer
 * @src: The source to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: Pointer to duplicated string, or NULL if any error.
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	s = (char *) malloc((_strlen(str) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}




/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if identical, or the difference between
 * the two first different characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
