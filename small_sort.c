#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	max;

	max = get_max(*a);
	if ((*a)->value == max)
		ra(a);
	else if ((*a)->next->value == max)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min;

	while (ft_lstsize(*a) > 3)
	{
		min = get_min(*a);
		if ((*a)->value == min)
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}