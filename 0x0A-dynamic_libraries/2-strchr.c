/**
  * _strchr - search for char c.
  * @s: array to search
  * @c: char looking for
  * Return: Return loc of c if found, or NULL if not
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
