#include "ps_header.h"
//head
void	sl_ra(t_stack a)
{
	t_cd_list	*new_head;

	new_head = (*a)->previous;
	ft_apply(new_head, a);
}
void	sl_rb(t_stack b)
{
	t_cd_list	*new_head;

	new_head = (*b)->previous;
	ft_apply(new_head, b);

}

void	sl_rr(t_stack a, t_stack b)
{
	sl_ra(a);
	sl_rb(b);
}
