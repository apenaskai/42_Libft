/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:20:41 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:20:41 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dst;
	size_t			counter;

	memory_src = (unsigned char *)src;
	memory_dst = (unsigned char *)dst;
	counter = len;
	if (memory_src < memory_dst)
	{
		while (counter)
		{
			counter--;
			memory_dst[counter] = memory_src[counter];
		}
		return (dst);
	}
	ft_memcpy(memory_dst, memory_src, len);
	return (dst);
}
