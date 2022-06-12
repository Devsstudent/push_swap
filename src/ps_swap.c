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

void	sl_sa(t_stack a)
{
    t_cd_list *buff;

    a.next->next->previous = a;
    buff = a.next;
    buff->previous = a.previous;
    a.previous = a.next;
    a.next = a.next->next;
    buff->next = a;
}

void	sl_sb(t_stack a)
{

}

void	sl_ss(t_stack a, t_stack b)
{

}

