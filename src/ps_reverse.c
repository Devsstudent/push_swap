#include "ps_header.h"

void	rra(t_stack a)
{
	t_cd_list	*new_head;

	new_head = (*a)->next;
	ft_apply(new_head, new_head);
}

void	rrb(t_stack b)
{
	t_cd_list	*new_head;

	new_head = (*b)->next;
	ft_apply(new_head, new_head);
}

void	rrr(t_stack a, t_stack b)
{
	rra(a);
	rrb(b);
}
