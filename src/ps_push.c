#include "ps_header.h"

//easier to just remove 1 element of head of stack and create new element by info to push it at the top of a;
void ps_pa(t_clist **stack_a, t_clist **stack_b)
{
	t_clist	*top_a;
	t_clist	*buff_b;
	t_clist	*buff_a;

	buff_b = *stack_b;
	buff_a = *stack_a;
	//if !stack a ou b a gere
	top_a = ps_clst_new(buff_b->content);
	ps_clst_add_front(stack_a, top_a);
	ps_remove_head(stack_b);
}

void	ps_pb(t_clist **stack_a, t_clist **stack_b)
{
	t_clist	*top_b;
	t_clist	*buff_b;
	t_clist	*buff_a;

	buff_b = *stack_b;
	buff_a = *stack_a;
	//if !stack a ou b a gere
	top_b = ps_clst_new(buff_a->content);
	ps_clst_add_front(stack_b, top_b);
	ps_remove_head(stack_a);
}

void	ps_remove_head(t_clist **stack)
{
	t_clist	*buff;
	t_clist *new_head;

	buff = *stack;
	new_head = buff->next;
	buff = *stack;
	buff->previous->next = buff->next;
	buff->next->previous = buff->previous;
	free(buff->content);
	free(buff);
	ps_apply_new_head(buff->next, &new_head->next);
	stack = &new_head;
}
