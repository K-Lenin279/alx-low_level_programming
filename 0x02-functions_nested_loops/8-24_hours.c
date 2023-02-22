#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * starting from 00:00 to 23:59
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int s, m, h, d;

	for (s = 48; s <= 50; s++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (h = 48; h <= 53; h++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (s >= 50 && m >= 52)
						break;
					_putchar(s);
					_putchar(m);
					_putchar(58);
					_putchar(h);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}	
}
