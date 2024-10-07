
#include <unistd.h>

int	ft_isspace(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (ac == 2)
	{
		while (ft_isspace(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (ft_isspace(av[1][i]))
				space = 1;
			if (!ft_isspace(av[1][i]))
			{
				if (space == 1)
					write(1, "   ", 3);
				space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

/*

Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat
	-e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>

*/
