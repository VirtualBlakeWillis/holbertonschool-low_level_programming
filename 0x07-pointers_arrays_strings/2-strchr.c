/**
  *
  */

char *_strchr(char *s, char c)
{
	int i = 0;
	char retVal;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	return (s + i);
}
