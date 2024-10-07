#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
		result = result * 10 + *str++ - '0';
	return (result);
}

void	ft_puthex(int n)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	else
		ft_putchar(symbols[n % 16]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_puthex(ft_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}

/*

Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$

*/
