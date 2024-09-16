
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	bit;

	i = 8;
	bit = 0;
	while (i--)
	{
		bit = (bit << 1) | (octet & 1);
		octet = (octet >> 1);
	}
	return (bit);
}

#include <stdio.h>

int	main(void)
{
	unsigned char	bit;
	unsigned char	res;
	int				i;

	bit = 0;
	res = reverse_bits((unsigned char)5);
	i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + '0';
		printf("%c", bit);
	}
}
/*

Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
		||
		\/
 0110  0100

*/
