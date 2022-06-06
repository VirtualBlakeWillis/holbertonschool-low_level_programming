/**
  * cap_string - capitalize all words of a string (that meet criteria)
  * @s - input string
  * Return: pointer to s
  */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' \
				|| str[i] == '.' || str[i] == '!' || str[i] == '"' || str[i] == '(' \
				|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
