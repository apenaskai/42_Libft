/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:22:06 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:22:06 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		s1++;
		s2++;
		x++;
	}
	return (0);
}
