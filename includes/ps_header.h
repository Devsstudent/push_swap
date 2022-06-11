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

typedef struct s_stack{
	void				*content;
	int					index;
	struct s_cd_list	*next;
	struct s_cd_list	**head;
	struct s_cd_list	*previous;
}						t_stack;

#endif
