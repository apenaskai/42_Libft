/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:22:01 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:22:01 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*str_cpy;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	counter = 0;
	s_len = ft_strlen(s) + 1;
	str_cpy = (char *) malloc(sizeof(char) * s_len);
	if (!str_cpy)
		return (NULL);
	while (s[counter])
	{
		str_cpy[counter] = f(counter, s[counter]);
		counter++;
	}
	str_cpy[counter] = '\0';
	return (str_cpy);
}
