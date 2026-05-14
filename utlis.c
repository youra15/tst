#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *a)
{
	while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
}