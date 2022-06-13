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

# include "libft.h"

typedef struct s_clist{
	void			*content;
	int				index;
	struct s_clist	*next;
	struct s_clist	**head;
	struct s_clist	*previous;
}					t_clist;

//typedef **t_cd_list t_stack;

#endif
