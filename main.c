#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	init_stack(&a, argv);
	if (is_sorted(a))
		return (0);
	if (ft_lstsize(a) == 2)
		sa(&a);
	else if (ft_lstsize(a) == 3)
		sort_three(&a);
	else if (ft_lstsize(a) <= 5)
		sort_five(&a, &b);
	return (0);
}
