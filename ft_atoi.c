/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 12:52:42 by luzardo           #+#    #+#             */
/*   Updated: 2026/05/13 11:15:24 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	s;

	result = 0;
	s = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] && (str[i] > 47 && str[i] < 58))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * s);
}
