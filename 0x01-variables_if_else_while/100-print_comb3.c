#include <stdio.h>
/**
  * main -
  *
  * Return:
  */
int main(void)
{
	int i, x, inasc_one, inasc_two, comma, space;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			for(x = 0; x < 10; x++)
			{
				if (x != i && x > i )
				{
					inasc_one = i + 48;
					inasc_two = x + 48;
					putchar(inasc_one);
					putchar(inasc_two);	
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
