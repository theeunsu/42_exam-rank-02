#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	if (begin_list == NULL)
		return (0);
	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

#include <stdlib.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	int		size;

	list = (t_list *)malloc(sizeof(t_list));
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	list->next = node1;
	list->data = NULL;
	node1->next = node2;
	node1->data = NULL;
	node2->next = NULL;
	node2->data = NULL;
	size = ft_list_size(list);
	printf("%d\n", size);
	free(node2);
	free(node1);
	free(list);
}
/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int					ft_list_size(t_list *begin_list);

You must use the following structure in your program ft_list_size.c :

typedef struct    s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

*/
