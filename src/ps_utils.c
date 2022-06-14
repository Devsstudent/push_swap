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

int	ps_clst_size(t_clist *head)
{
	int		size;
	int		i;

	size = 0;
	i = 0;
	if (!(head))
		return (size);
	if (head == *head->head)
	{
		head = head->next;
		size++;
		printf("%i", i);
	}
	while (head != *head->head)
	{
		head = head->next;
		size++;
		printf("%i", i);
	}
	return (size);
}

t_clist	*ps_clst_new(void *content)
{
	t_clist	*new;

	new = (t_clist *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = new;
	new->previous = new;
	new->head = NULL;
	new->index = -1;
	return (new);
}
//Probelme de deplacement de la tete qui ne doit pas etre effectuer
void	ps_clst_add_back(t_clist **head, t_clist *new)
{
	t_clist *buff;
	int i;

	buff = *head;
	i = 0;
	if (!head)
		return ;
	if (!(*head))
	{
		*head = new;
		new->head = head;
		return ;
	}
	if (buff == *(buff)->head)
	{
		buff = buff->next;
		i++;
	}
	ft_printf("%i", *(int *) new->content);
	ft_printf("%i", *((int *) (buff)->next->content));
	ft_printf("%i", *((int *) (*(buff)->head)->content));
	while (buff != *buff->head)
	{
		buff = buff->next;
		i++;
	}
	ft_printf("%i\n", i);
	buff->next = new;
	new->next = *head;
	if ((buff)->previous == (buff))
		(buff)->previous = new;
	new->previous = buff;
	new->head = head;
	*head = new->next;
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

void	ps_clst_clear(t_clist **head)
{
	t_clist	*buff;
	t_clist *tmp;

	if (!head || !(*head))
		return ;
	buff = *head;
	while (buff != NULL)
	{
		tmp = buff->next;
		free(buff->content);
		free(buff);
		buff = tmp;
	}
	head = NULL;
}
