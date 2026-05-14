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
	print_stack(a);
	free_stack(&a);
	return (0);
}