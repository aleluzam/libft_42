/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:04:09 by luzardo           #+#    #+#             */
/*   Updated: 2026/05/03 11:55:27 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	s;

	result = 0;
	s = 1;
	while (*str && (*str < 65 || (*str > 90 && *str < 97) || *str > 122))
	{
		if (*str == '-')
			s = s * -1;
		while (*str >= 48 && *str <= 57)
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		if (result != 0)
			return (result * s);
		str++;
	}
	return (0);
}
