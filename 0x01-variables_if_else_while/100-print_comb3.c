#include <stdio.h>
/**
  * main -
  *
  * Return:
  */
int main(void)
{
	int i, x, inasc_one, inasc_two;

	for (i = 0; i < 10; i++)
	{
		for(x = 0; x < 10; x++)
		{
			if (x != i && x > i)
			{
				inasc_one = i + 48;
				inasc_two = x + 48;
				putchar(inasc_one);
				putchar(inasc_two);	
				if (!((i == 8) && (x == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
