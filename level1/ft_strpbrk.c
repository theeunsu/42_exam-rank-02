// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);
#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	while (*s1 != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
				return ((char *)s1);
			j++;
		}
		s1++;
	}
	return (0);
}



int	main(void)
{
	char	*chars;

	char *result, *string = "A Blue Danube";
	chars = "b";
	result = ft_strpbrk(string, chars);
	printf("The first occurrence of any of the characters \"%s\" in "
			"\"%s\" is \"%s\"\n",
			chars,
			string,
			result);
}
