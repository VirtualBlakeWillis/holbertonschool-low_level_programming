#include <stdio.h>
/**
  * main - print number combos, requirements listen in project page of README
  *
  * Return: 0
  */
int main(void)
{
	int i, x, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if ((x != i && x > i) && (z != x && z > x))
				{
					putchar(i);
					putchar(x);
					putchar(z);
					if ( i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
