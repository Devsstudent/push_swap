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
#include "sl_header.h"
//swap first and second value and so head too like 2nd element become head
//Stack est l'adress de la head de la liste


void	ps_sa(t_stack a)
{
 	t_cd_list	*first;
 	t_cd_list	*second;

	if (!(*a) || !((*a)->next))
		return ;
	seconde = first->next;
	first->next = seconde->next;
	seconde->previous = first->previous;
	first->previous = seconde;
	ps_apply_new_head(first, a);
}

void	ps_sb(t_stack b)
{
 	t_cd_list	*first;
 	t_cd_list	*second;

	if (!(*b) || !((*b)->next))
		return ;
	seconde = first->next;
	first->next = seconde->next;
	seconde->previous = first->previous;
	first->previous = seconde;
	ps_apply_new_head(first, b);
}

void	sl_ss(t_stack a, t_stack b)
{
	ps_sa(a);
	ps_sb(b);
}

