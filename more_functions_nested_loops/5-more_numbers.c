#include "main.h"

/**
 * more_numbers - prints 0-14 ten times followed by a new line
 *
 * You can only use _putchar three times in the source code:
 *  - once for tens digit
 *  - once for units digit
 *  - once for newline
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* repeat 10 times */
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');       /* tens digit */
			_putchar((j % 10) + '0'); /* units digit */
		}
		_putchar('\n'); /* newline */
	}
}
