/**
  *
  */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int i = 0;
	int out = 0;

	while (out == 0 && s[i] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				out = 1;
				break;
			}
		}
		if (out == 1)
			break;
		else
			i++;
	}
	

	if (s[i] == '\0')
		return ('\0');
	else
		return (s + i);
}
