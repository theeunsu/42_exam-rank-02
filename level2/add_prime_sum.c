
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	ft_isprime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	sum;
	int	n;

	sum = 0;
	if (ac != 2 || av[1] <= 0)
	{
		write(1, "0\n", 1);
		return (0);
	}
	n = ft_atoi(av[1]);
	while (n > 1)
	{
		if (ft_isprime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
}
