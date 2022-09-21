#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: input integer
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
