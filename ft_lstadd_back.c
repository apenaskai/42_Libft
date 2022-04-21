/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:10 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:19:10 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_nav;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lst_nav = ft_lstlast(*lst);
	lst_nav->next = new;
}
