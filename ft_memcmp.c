/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:20:34 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:20:34 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*convert_b1;
	unsigned char	*convert_b2;

	convert_b1 = (unsigned char *)b1;
	convert_b2 = (unsigned char *)b2;
	if (len == 0)
		return (0);
	while (len-- > 0)
	{
		if (*convert_b1 != *convert_b2)
			return ((int)(*convert_b1 - *convert_b2));
		convert_b1++;
		convert_b2++;
	}
	return (0);
}
