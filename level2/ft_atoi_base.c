

int	is_valid(char c, int base)
{
	char	*lsymbols;
	char	*usymbols;

	lsymbols = "0123456789abcdef";
	usymbols = "0123456789ABCDEF";
	while (base--)
	{
		if (c == lsymbols[base] || c == usymbols[base])
			return (1);
	}
	return (0);
}

int	value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while (*str <= 32)
		str++;
	if (*str == '-')
		minus *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (is_valid(*str, str_base))
		result = result * str_base + value_of(*str++);
	return (result * minus);
}

/*

Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%d\n", ft_atoi_base(av[1], ft_atoi_base(av[2], 10)));
// }
