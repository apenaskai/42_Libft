/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:06 by knascime          #+#    #+#             */
/*   Updated: 2022/01/25 14:19:06 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_c(int c)
{
	return (c + '0');
}

static int	count_elements(int n)
{
	int	counter;

	counter = 1;
	while (n / 10)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static int	check_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*final_string;
	int		counter;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	is_negative = check_negative(n);
	if (is_negative)
		n = -n;
	counter = count_elements(n) + is_negative;
	final_string = (char *) malloc(sizeof(char) * (counter + 1));
	if (!final_string)
		return (NULL);
	final_string[counter] = '\0';
	if (is_negative)
		final_string[0] = '-';
	while (counter-- > is_negative)
	{
		final_string[counter] = to_c(n % 10);
		n = n / 10;
	}
	return (final_string);
}
