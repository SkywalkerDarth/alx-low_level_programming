#include "main.h"
/**
 * main - prints _putchar followed by a new line
 * prints "_putchar" followed by a new line
 * Return: 0
 */

int main(void)

{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
