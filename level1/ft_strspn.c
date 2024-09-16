#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		check = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}

int	main(void)
{
	char	string[] = "cabbage";
	char	strCharset[] = "abc";
	int		nIndex;

	nIndex = 0;
	//문자열에서 '1', '2', 'a', 'b' 문자가 없는 첫 위치를 검색
	nIndex = strspn(string, strCharset);
	printf("index : %d, %s\n", nIndex, &string[nIndex]);
	//문자열에서 'A', 'B', 'C' 중 일치되는 첫 문자가 있는 위치 검색
	nIndex = ft_strspn(string, strCharset);
	printf("index : %d, %s\n", nIndex, &string[nIndex]);
	return (0);
	// index = 5
}

// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);
