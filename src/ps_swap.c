/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <odessein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:24:52 by odessein          #+#    #+#             */
/*   Updated: 2022/06/11 18:28:34 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ps_header.h"
//swap first and second value and so head too like 2nd element become head
//Stack est l'adress de la head de la liste


void	ps_sa(t_clist **stack_a)
{
 	t_clist	*second;
	t_clist *buff;

	buff = *stack_a;
	if (!(buff) || !(buff->next))
		return ;
	second = buff->next;
	buff->next = second->next;
	second->previous = buff->previous;
	buff->previous = second;
	ps_apply_new_head(second, stack_a);
}

void	ps_sb(t_clist **stack_b)
{
 	t_clist	*second;
	t_clist *buff;

	buff = *stack_b;
	if (!(buff) || !(buff->next))
		return ;
	second = buff->next;
	buff->next = second->next;
	second->previous = buff->previous;
	buff->previous = second;
	ps_apply_new_head(second, stack_b);
}

void	sl_ss(t_clist **stack_a, t_clist *stack_b)
{
	ps_sa(stack_a);
	ps_sb(stack_b);
}

