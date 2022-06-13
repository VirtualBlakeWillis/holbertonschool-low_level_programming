/**
  * _islower - returns 1 if character is lowercase, returns 0 of not
  * @c: input ASCII value
  * Return: 0 of uppercase, 1 of lowercase
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
