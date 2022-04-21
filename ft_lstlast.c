/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:27 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:19:27 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_position;
	t_list	*last_lst;

	if (!lst)
		return (NULL);
	lst_position = lst;
	while (lst_position)
	{
		last_lst = lst_position;
		lst_position = lst_position -> next;
	}
	return (last_lst);
}
