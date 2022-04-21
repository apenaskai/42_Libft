/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:37 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:19:37 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*lst_nav;

	lst_size = 0;
	lst_nav = lst;
	while (lst_nav)
	{
		lst_size++;
		lst_nav = lst_nav->next;
	}
	return (lst_size);
}
