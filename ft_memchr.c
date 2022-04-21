/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:41 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:19:41 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*converted_b;

	converted_b = (unsigned char *) b;
	while (len--)
	{
		if (*converted_b == (unsigned char) c)
			return ((void *)converted_b);
		converted_b++;
	}
	return (NULL);
}
