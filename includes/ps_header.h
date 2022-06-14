	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <odessein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:12:45 by odessein          #+#    #+#             */
/*   Updated: 2022/06/11 18:27:25 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_HEADER_H
# define PS_HEADER_H
//DONT NEED TO CREATE JUSTE SAVE THE ELEMENT WE SEND AND LOOP WHILE WE ARE NOT BACK AT IT
//CREATE A NODE = TO THE HEAD->NEXT AND LOOP ON IT COMPARING IT TO HEAD;
//REMAKE ALL :)
# include "libft.h"
# include "limits.h"
typedef struct s_clist{
	void			*content;
	int				index;
	struct s_clist	*next;
	//maybe not need to store head like that i guess
	//how to know wihich is head
	struct s_clist	**head;
	struct s_clist	*previous;
}					t_clist;

//typedef **t_cd_list t_stack;

t_bool	ps_parsing(int ac, char **av, t_clist **stack_a);
void	ps_apply_new_head(t_clist *new_head, t_clist **stack);
int	ps_clst_size(t_clist *head);
t_clist	*ps_clst_new(void *content);
void	ps_clst_add_back(t_clist **head, t_clist *new);
void	ps_clst_add_front(t_clist **head, t_clist *new);
void	ps_clst_clear(t_clist **head);
void	rra(t_clist **stack_a);
void	rrb(t_clist **stack_b);
void	rrr(t_clist *stack_a, t_clist  *stack_b);
void ps_pa(t_clist **stack_a, t_clist **stack_b);
void	ps_pb(t_clist **stack_a, t_clist **stack_b);
void	ps_remove_head(t_clist **stack);
void	sl_ra(t_clist **stack_a);
void	sl_rb(t_clist **stack_b);
void	sl_rr(t_clist **stack_a, t_clist **stack_b);
void	ps_sa(t_clist **stack_a);
void	ps_sb(t_clist **stack_b);
void	sl_ss(t_clist **stack_a, t_clist **stack_b);

#endif
