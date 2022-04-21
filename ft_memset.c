/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:20:46 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:20:46 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	*memory;

	counter = 0;
	memory = dest;
	while (len > counter)
	{
		memory[counter] = c;
		counter++;
	}
	return (memory);
}
