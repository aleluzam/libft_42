/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzardo <luzardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:22:20 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/09 12:38:27 by luzardo          ###   ########.fr       */
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

static char	*ft_loop(char *new, size_t len, int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	while (i < len)
	{
		new[len - i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	if (n > 0)
		new[0] = '0' + (n % 10);
	return (new);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_recursive_count(n);
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	new = ft_loop(new, len, n);
	return (new);
}
