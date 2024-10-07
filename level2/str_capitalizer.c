#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

void	str_capitalizer(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	ft_putchar(str[0]);
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && ft_isspace(str[i - 1]))
			str[i] -= 32;
		ft_putchar(str[i]);
		i++;
	}
}
int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		ft_putchar('\n');
	else
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

/*

Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay,
	this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
		Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>


*/
