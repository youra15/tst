#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
} t_stack;

/* Parsing */
int ft_is_number(char *str);
long ft_atol(const char *str);
int has_duplicate(t_stack *a);
int is_sorted(t_stack *a);

/* Init */
void init_stack(t_stack **a, char **argv);

/* Stack utils */
t_stack *ft_lstnew(int value);
t_stack *ft_lstlast(t_stack *lst);
void ft_lstadd_back(t_stack **lst, t_stack *new);
int ft_lstsize(t_stack *lst);

/* Operations */
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);

void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);

void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);

void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);

/* Sorting */
void sort_three(t_stack **a);
void sort_five(t_stack **a, t_stack **b);
void radix_sort(t_stack **a, t_stack **b);

/* Utils */
void ft_error(void);
void free_stack(t_stack **stack);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

int	is_sorted(t_stack *a);

int	get_max(t_stack *a);
void	sort_three(t_stack **a);
int	get_min(t_stack *a);
void	sort_five(t_stack **a, t_stack **b);
t_stack	*get_min_node(t_stack *a);
void	assign_index(t_stack *a);

#endif
