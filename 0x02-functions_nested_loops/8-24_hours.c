#include "main.h"
/**
  * jack_bauer - prints every minute of hours 0-23
  * Return: void
  */

void jack_bauer(void)
{

	int h, m, tmp; /* Vars for Counting */
	int ha, hb, ma, mb; /* Vars for display */

	for (h = 0; h <= 23; h++)
	{

		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
				ha = 0;
				hb = h;
			}
			else
			{
				hb = h % 10;
				tmp = h - hb;
				ha = tmp / 10;
			}
			if (m < 10)
			{
				ma = 0;
				mb = m;
			}
			else
			{
				mb = m % 10;
				tmp = m - mb;
				ma = tmp / 10;
			}
			_putchar(ha + '0');
			_putchar(hb + '0');
			_putchar(':');
			_putchar(ma + '0');
			_putchar(mb + '0');
			_putchar('\n');
		}
	}
}
