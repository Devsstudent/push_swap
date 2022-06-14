/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <odessein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:26:17 by odessein          #+#    #+#             */
/*   Updated: 2022/06/11 18:29:13 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ps_header.h"

static t_bool	ps_fill_stack(char *elems, t_clist **stack_a);
static t_bool	ps_check_double(int number, t_clist **stack_a);

t_bool	ps_parsing(int ac, char **av, t_clist **stack_a)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!ps_fill_stack(av[i], stack_a))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static t_bool	ps_check_double(int number, t_clist **stack_a)
{
	t_clist	*buff;

	if (!stack_a)
		return (FALSE);
	buff = *stack_a;
//	ft_printf("test %i\n", *((int *) (*buff->head)->content));
	while (buff != *buff->head)
	{
		if (number == *((int *) buff->content))
			return (FALSE);
		buff = buff->next;
	}
	return (TRUE);
}

static t_bool	ps_fill_stack(char *elems, t_clist **stack_a)
{
	long long	*content;
	int			i;
	int			condition;

	i = 0;
	while (*elems)
	{
		//si il y a un - il faut un digit derriere
		condition = (*elems == '-' && *(elems + 1) != '\0' && ft_is_digit(*(elems + 1)));
		if (!ft_is_digit(*elems) && *elems != ' ' && !condition)
			return (FALSE);
		content = (long long  *) malloc(sizeof(content));
		//Probleme avec atoi pour les int max et int min ...
		*content = ft_atoi(elems);
		if (*content < INT_MIN || *content > INT_MAX)
			return (FALSE);
		if (i != 0 && !ps_check_double(*content, stack_a))
			return (FALSE);
		ps_clst_add_back(stack_a, ps_clst_new(content));
		printf("%i", ps_clst_size(*stack_a));
		if (*elems == ' ')
			while (*elems && *elems == ' ')
				elems++;
		while (*elems && (ft_is_digit(*elems) || *elems == '-'))
			elems++;
		i++;
	}
	return (TRUE);
}
