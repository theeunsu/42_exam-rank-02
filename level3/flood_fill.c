
typedef struct s_point
{
	int		x;
	int		y;

}			t_point;

fill(char **tab, t_point size, char target, int col, int row)
{
	if (col < 0 || row < 0 || col >= size.y || row >= size.x)
		return ;
	if (tab[col][row] == 'F' || tab[col][row] != target)
		return ;
	tab[col][row] = 'F';
	fill(tab, size, target, col + 1, row);
	fill(tab, size, target, col - 1, row);
	fill(tab, size, target, col, row + 1);
	fill(tab, size, target, col, row - 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	target = tab[begin.y][begin.x];
	fill(tab, size, target, begin.y, begin.x);
}
/*
Assignment name  : flood_fill
Expected files   : *.c, *.h
Allowed functions: -
--------------------------------------------------------------------------------
Write a function that takes a char ** as a 2-dimensional array of char, a
t_point as the dimensions of this array and a t_point as the starting point.
Starting from the given 'begin' t_point, this function fills an entire zone
by replacing characters inside with the character 'F'. A zone is an group of
the same character delimitated horizontally and vertically by other characters
or the array boundry.
The flood_fill function won't fill diagonally.
The flood_fill function will be prototyped like this:
	void  flood_fill(char **tab, t_point size, t_point begin);
The t_point structure is prototyped like this:
	typedef struct  s_point
	{
	int		x;
	int		y;
	}               t_point;
Example:
$> cat test_main.c
#include "flood_fill.h"
#include "test_functions.h"

int	main(void)
{
	char	**area;
	t_point	size;
	t_point	begin;

	size = {8, 5};
	begin = {2, 2};
	char *zone[] = {
		"1 1 1 1 1 1 1 1",
		"1 0 0 0 1 0 0 1",
		"1 0 0 1 0 0 0 1",
		"1 0 1 1 0 0 0 1",
		"1 1 1 0 0 0 0 1",
	}
	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	putc('\n');
	print_tab(area);
	return (0);
}
$> gcc flood_fill.c test_main.c test_functions.c -o flood_fill; ./flood_fill
1 1 1 1 1 1 1 1
1 0 0 0 1 0 0 1
1 0 0 1 0 0 0 1
1 0 1 0 0 0 0 1
1 1 0 0 0 0 0 0
1 1 1 1 1 1 1 1
1 F F F 1 0 0 1
1 F F 1 0 0 0 1
1 F 1 0 0 0 0 1
1 1 0 0 0 0 0 0
$>
------------------------------------------------------------------------------*/
