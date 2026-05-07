/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzardo <luzardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:45:03 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/06 13:58:48 by luzardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (src > dest)
		return (ft_memcpy(dest, src, n));
	i = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i <= n)
	{
		d[n - i] = s[n - i];
		i++;
	}
	return (dest);
}
