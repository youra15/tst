#include "push_swap.h"
#include <stdio.h>

int	is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

void	assign_index(t_stack *a)
{
	t_stack	*smallest;
	int		index;

	index = 0;
	while (index < ft_lstsize(a))
	{
		smallest = get_min_node(a);
		while (a)
		{
			if (a->value == smallest->value
				&& a->index == -1)
			{
				a->index = index;
				break ;
			}
			a = a->next;
		}
		index++;
	}
}