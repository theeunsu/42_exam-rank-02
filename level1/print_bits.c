
#include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int				i;
// 	unsigned char	bit;

// 	i = 8;
// 	bit = 0;
// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

void	print_bits(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}

int	main(void)
{
	print_bits(5);
}

// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"
