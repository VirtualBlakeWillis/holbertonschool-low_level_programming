#include <stdio.h>
/**
  * main - print number combos, requirements listen in project page of README
  *
  * Return: 0
  */
int main(void)
{
	int i, x;

	for (i = '0'; i <= '99'; i++)
	{
		for (x = '0'; x <= '99'; x++)
		{
			if (x != i && x > i)
			{		
				putchar(i);
				putchar(' ');
				putchar(x);
				if ( i != '8')
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
