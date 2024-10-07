void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int			tab[] = {3, 4, 1, 6, 10, 4, 2, 8, 0};
	unsigned	size;

	size = sizeof(tab) / sizeof(tab[0]);
	sort_int_tab(tab, size);
	for (unsigned int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
}

/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void	sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.

*/
