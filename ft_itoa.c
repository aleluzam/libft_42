/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzardo <luzardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:22:20 by aluzardo          #+#    #+#             */
/*   Updated: 2026/04/30 17:49:14 by luzardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_recursive_count(int n)
{
	size_t	counter;

	counter = 0;
	if (n < 0)
	{
		counter += 1;
		n *= -1;
	}
	while (n >= 1)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static void	ft_start_variables(size_t *i, size_t *len, int n)
{
	*i = 1;
	*len = ft_recursive_count(n);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*new;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	ft_start_variables(&i, &len, n);
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	if (n < 0)
		new[0] = '-';
	while (i < len)
	{
		new[len - i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	if (n >= 0)
		new[0] = '0' + (n % 10);
	return (new);
}
