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

typedef t_stack **t_cd_list;

typedef struct s_cd_list{
	void				*content;
	int					index;
	struct s_cd_list	*next;
	struct s_cd_list	**head;
	struct s_cd_list	*previous;
}						t_cd_list;

#endif
