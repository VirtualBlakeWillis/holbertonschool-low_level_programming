/**
  *
  */

unsigned int _strspn(char *s, char *accept)
{
	int esc = 0;
	int x;
	unsigned int i = 0;

	while (esc == 0)
	{
		x = 0;
		do {
			if (accept[x] == s[i])
			{
				i++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				esc = 1;
			}
			x++;
		} while (accept[x] != '\0');
	}
	return (i);
}
