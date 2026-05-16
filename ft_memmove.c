/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:45:03 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/13 11:15:40 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest || !src)
		return (NULL);
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
