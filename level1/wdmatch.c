#include <unistd.h>

int	main(int ac, char **av)
{
	const char	*s1 = av[1];
	const char	*s2 = av[2];
	int			i;
	int			len;

	i = 0;
	len = 0;
	if (ac == 3)
	{
		while (s1[len])
			len++;
		while (i < len && *s2)
		{
			if (s1[i] == *s2)
				i++;
			s2++;
		}
		if (i == len)
			write(1, s1, len);
	}
	write(1, "\n", 1);
	return (0);
}

/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string,
	while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n,
	otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat
	-e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/
