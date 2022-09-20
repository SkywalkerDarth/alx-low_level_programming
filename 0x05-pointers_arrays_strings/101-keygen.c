#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/**
 * main - function to generate random password
 * Return: 0
 */
int main(void)
{
	int password[100];
	int i, s, count;

	count = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		count += (password[i] + '0');
		putchar(password[i] + '0');

		if ((2772 - count) - '0' < 78)
		{
			s = 2772 - count - '0';
			count += s;
			putchar(s + '0');
			break;
		}
	}
	return (0);
}
