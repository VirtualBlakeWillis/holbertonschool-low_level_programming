/**
  * _strlen - gets legnth of string
  * @s: string to get legnth of
  * Return: int
  */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
