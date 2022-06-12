#include "ps_header.h"

void	ps_apply_new_head(t_cd_list *new_head, t_stack stack)
{
	t_cd_list	*buff;

	buff = *a;
	while (*buff != new_head)
	{
		buff->head = &new_head;
		buff = buff->next;
	}
}
