#include "ps_header.h"

void	ps_apply_new_head(t_clist *new_head, t_clist **stack)
{
	t_clist	*buff;

	buff = *stack;
	while (buff != new_head)
	{
		buff->head = &new_head;
		buff = buff->next;
	}
}

int	ps_clst_size(t_clist **head)
{
	t_clist	*buff;
	int		size;

	size = 0;
	if (!head)
		return (0);
	buff = *head;
	if (!buff)
		return (size)
	while (buff != buff->head)
	{
		buff = buff->next;
		size++;
	}
	return (size);
}

t_clist	*ps_clst_new(void *content)
{
	t_clist	*new;

	new = (t_clist) malloc(sizeof(new));
	if !(new)
		return (NULL);
	new->content = content;
	new->next = new;
	new->previous = new;
	new->head = &new;
	new->index = -1;
	return (new);
}

void	ps_clst_add_back(t_clist **head, t_clist *new)
{
	t_clist	*buff;
	if (!head)
		return ;
	buff = *head;
	if (!buff)
		buff = new;
	while (buff != buff->head)
		buff = buff->next;
	buff->next = new;
	new->next = *head;
	if (buff->previous == buff)
		buff->previous = new;
	new->previous = buff;
	new->head = *head;
}

void	ps_clst_add_front(t_clist **head, t_clist *new)
{
	t_clist	*buff;

	if (!head)
		return ;
	buff = *head;
	if (!buff)
		return ;
	new->next = buff;
	new->previous = buff->previous;
	buff->previous->next = new;
	buff->previous = new;
	if (buff->next == buff)
		buff->next = new;
	ps_apply_new_head(new, head);
}
