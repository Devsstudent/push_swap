#include "ps_header.h"

void	rra(t_clist **stack_a)
{
	t_clist	*new_head;
	t_clist	*buff;

	buff = *stack_a;
	new_head = buff->next;
	ft_apply(new_head, buff->next->next);
	stack_a = &new_head;
}

void	rrb(t_clist **stack_b)
{
	t_clist	*new_head;
	t_clist	*buff;

	buff = *stack_b;
	new_head = buff->next;
	ft_apply(new_head, buff->next->next);
	stack_b = &new_head;
}

void	rrr(t_clist *stack_a, t_clist  *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
