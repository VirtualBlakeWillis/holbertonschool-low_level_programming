/**
  * _isupper - checks if input is uppercase.
  *@c: Input to be checked
  *Return: return 1 if input is Uppercase, 0 if not.
  *
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
