/**
  * _isdigit - checks if input is a number
  *@c: input to check
  *Return: Return 1 if input is a digit, 0 if not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
