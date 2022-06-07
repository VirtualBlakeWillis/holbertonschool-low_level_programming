/**
  *
  */

unsigned int _strspn(char *s, char *accept)
{
	int esc = 0;
	int x = 0;
	unsigned int i = 0;

	while (esc == 0)
	{
		for (x = 0; accept[x] != '\0' ; x++)
		{
			if (accept[x] == s[i])
			{
				i++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				esc = 1;
			}

		}
	}
	return (i);
}
