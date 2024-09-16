
int	max(int *tab, unsigned int len)
{
	int	result;
	int	i;

	i = 0;
	result = tab[0];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {3, 6, 10, 7, 8};

	printf("%d", max(tab, 5));
}

// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int,
// the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.
