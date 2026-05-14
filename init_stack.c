#include "push_swap.h"

void	init_stack(t_stack **a, char **argv)
{
	t_stack	*new;
	long	num;
	int		i;

	i = 1;
	while (argv[i])
	{
		if (!ft_is_number(argv[i]))
			ft_error();
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			ft_error();
		new = ft_lstnew((int)num);
		ft_lstadd_back(a, new);
		i++;
	}
}