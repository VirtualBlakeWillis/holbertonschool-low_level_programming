/**
  * *leet - replace some letters with numbers in a string
  * @str: input string
  * Return: pointer to str
  */

char *leet(char *str)
{
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";
	int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
				str[i] = number[j];
		}
		i++;
	}
	return (str);
}
