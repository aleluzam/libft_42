/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzardo <luzardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:17:57 by luzardo           #+#    #+#             */
/*   Updated: 2026/05/09 11:42:09 by luzardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*new;
	char	*ptr;

	if (nelem > SIZE_MAX / elsize)
		return (NULL);
	new = malloc(nelem * elsize);
	if (!new)
		return (NULL);
	ptr = new;
	while (ptr <= ((char *)new + (nelem * elsize - 1)))
	{
		*ptr = 0;
		ptr++;
	}
	return (new);
}
