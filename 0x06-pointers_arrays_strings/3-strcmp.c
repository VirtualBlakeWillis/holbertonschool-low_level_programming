/**
  * _strcmp - compares two strings
  * @s1: string one
  * @s2: strint two
  * Return: int
  */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0')
	{
		if ((s1[x] - s2[x]) != 0)
			break;
		x++;
	}

	return (s1[x] - s2[x]);
}
