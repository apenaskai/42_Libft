/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:18:43 by knascime          #+#    #+#             */
/*   Updated: 2022/04/18 02:07:48 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	total = nelem * elsize;
	if (total / nelem != elsize)
		return (NULL);
	ptr = malloc(nelem * elsize);
	if (ptr)
		ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
