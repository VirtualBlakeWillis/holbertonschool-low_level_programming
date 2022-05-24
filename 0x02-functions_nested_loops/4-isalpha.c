/**
  * isalpha - returns 1 if c is a letter, 0 if not
  * @c: int value representing ASCII char
  * Return: 1 for letter, 0 for not
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <=90))
		return (1);
	else
		return (0);
}
