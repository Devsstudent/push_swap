#include "ps_header.h"
//head
void	sl_ra(t_clist **stack_a)
{
	t_clist	*new_head;

	new_head = (*stack_a)->previous;
	ps_apply_new_head(new_head, stack_a);
}
void	sl_rb(t_clist **stack_b)
{
	t_clist	*new_head;

	new_head = (*stack_b)->previous;
	ps_apply_new_head(new_head, stack_b);

}

void	sl_rr(t_clist **stack_a, t_clist **stack_b)
{
	sl_ra(stack_a);
	sl_rb(stack_b);
}
