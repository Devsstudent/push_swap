#include "ps_header.h"

//easier to just remove 1 element of head of stack and create new element by info to push it at the top of a;
void ps_pa(t_stack a, t_stack b)
{
	t_cd_list	*top__a;
	t_cd_list	*ex_top_a;

	top_a->content = (*b)->content;
	top_a->index = (*b)->index;
	ps_delete_head(b);
	top_a->previous = ex_top_a->previous;
	ex_top_a->previous->next = top_a;
	ex_top_a->previous = top_a;
	ps_apply_new_head(top_a, a);
}

void	ps_pb(t_stack b, t_stack a)
{
	t_cd_list	*top__b;
	t_cd_list	*ex_top_b;

	top_b->content = (*a)->content;
	top_b->index = (*a)->index;
	ps_delete_head(a);
	top_b->previous = ex_top_b->previous;
	ex_top_b->previous->next = top_b;
	ex_top_b->previous = top_b;
	ps_apply_new_head(top_b, b);
}

void	ps_delete_head(t_stack stack)
{
	t_cd_list	*new_first;

	new_first = (*t_stack)->next;
	new_first->previous = (*t_stack)->previous;
	ps_apply_new_head(new_first, stack);
	free(*t_stack->content);
	free(*t_stack);
}
