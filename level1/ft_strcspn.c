// 문자열 s에서 reject중 일치되는 첫 문자가 있는 위치 검색
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
// strspn, strcspn

int	main(void)
{
	char	string[] = "c1b2c3 A1B2C3";
	char	strCharset[] = "12ab";
	int		nIndex;

	nIndex = 0;
	//문자열에서 '1', '2', 'a', 'b' 문자가 없는 첫 위치를 검색
	nIndex = strcspn(string, strCharset);
	printf("index : %d, %s\n", nIndex, &string[nIndex]);
	//문자열에서 'A', 'B', 'C' 중 일치되는 첫 문자가 있는 위치 검색
	nIndex = ft_strcspn(string, strCharset);
	printf("index : %d, %s\n", nIndex, &string[nIndex]);
	return (0);
}
